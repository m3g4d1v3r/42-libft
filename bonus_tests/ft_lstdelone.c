#include <criterion/criterion.h>
#include <libft.h>

void	function_test_del(void *data) {
	free(data);
}

Test(lstdelone, simple0) {
	long *data = (long *) malloc(sizeof(long));
	long data_value = 6666666555;
	*data = data_value;
	t_list *node = ft_lstnew(data);
	cr_assert(*(long *)node->content == data_value);
	ft_lstdelone(node, function_test_del);
}
