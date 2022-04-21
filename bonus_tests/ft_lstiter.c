#include <criterion/criterion.h>
#include <libft.h>

void add_5_to_element(void *data)
{
	*(int *)data = *(int *)data + 5;
}

Test(lstiter, simple0)
{
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int expected[] = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	t_list *node_arr[10];
	for (short i = 9; i >= 0; i--) {
		node_arr[i] = ft_lstnew(&arr[i]);
		if (i < 9) {
			ft_lstadd_front(&node_arr[i + 1], node_arr[i]);
		}
	}
	ft_lstiter(node_arr[0], add_5_to_element);
	for (short i = 0; i < 10; i++) {
		cr_assert(*(int *)node_arr[i]->content == expected[i]);
		free(node_arr[i]);
	}
}
