#include <criterion/criterion.h>
#include <libft.h>

Test(lstsize, simple0) {
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	t_list *node_arr[10];
	for (short i = 9; i >= 0; i--) {
		node_arr[i] = ft_lstnew(&arr[i]);
		if (i < 9) {
			ft_lstadd_front(&node_arr[i + 1], node_arr[i]);
		}
	}
	t_list *curr = node_arr[0];
	for (short i = 0; i < 10; i++) {
		cr_assert(*(int *)curr->content == arr[i]);
		curr = curr->next;
	}
	cr_assert(ft_lstsize(node_arr[0]) == 10);
	// free allocated space
	for (short i = 0; i < 10; i++) {
		free(node_arr[i]);
	}
}
