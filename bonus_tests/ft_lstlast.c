#include <criterion/criterion.h>
#include <libft.h>

Test(lstlast, simple0) {
	int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	t_list *node_arr[10];
	for (short i = 9; i >= 0; i--) {
		node_arr[i] = ft_lstnew(&arr[i]);
		if (i < 9) {
			ft_lstadd_front(&node_arr[i + 1], node_arr[i]);
		}
	}
	cr_assert(ft_lstlast(node_arr[0]) == node_arr[9]);
	cr_assert(ft_lstsize(node_arr[0]) == 10);
	for (short i = 0; i < 10; i++) {
		free(node_arr[i]);
	}
}
