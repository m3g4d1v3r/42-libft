#include <criterion/criterion.h>
#include <libft.h>
#include <stdio.h>

void *add_10_to_element(void *data)
{
	*(int *)data = *(int *)data + 10;
	return (data);
}

Test(lstmap, simple0)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int rev[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
	int expected[] = {10, 11, 12, 13, 14, 15, 16, 17, 18, 19};
	t_list *node_arr[10];
	for (short i = 9; i >= 0; i--) {
		node_arr[i] = ft_lstnew(&arr[i]);
		if (i < 9) {
			ft_lstadd_front(&node_arr[i + 1], node_arr[i]);
		}
	}
	t_list *curr = ft_lstmap(node_arr[0], add_10_to_element, NULLPTR);
	t_list *prev = NULLPTR;
	size_t index = 0;
	while (curr) {
		cr_assert(*(int *)curr->content == expected[index++]);
		prev = curr;
		curr = curr->next;
		free(prev);
	}
}
