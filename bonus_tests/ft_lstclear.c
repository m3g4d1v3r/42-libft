#include <criterion/criterion.h>
#include <libft.h>
#include <stdio.h>

void	function_test_del_2(void *data) {
	free(data);
}

Test(lstclear, simple0) {
	int *arr[10];
	for (short i = 0; i < 10; i++) {
		arr[i] = (int *) malloc(sizeof(int));
		*arr[i] = i + 1;
	}
	t_list *node_arr[10];
	for (short i = 9; i >= 0; i--) {
		node_arr[i] = ft_lstnew(arr[i]);
		if (i < 9) {
			ft_lstadd_front(&node_arr[i + 1], node_arr[i]);
		}
	}
	for (short i = 0; i < 10; i++) {
		cr_assert(*(int *)node_arr[i]->content == i + 1);
	}
	ft_lstclear(&node_arr[0], function_test_del_2);
}
