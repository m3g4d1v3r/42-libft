#include <criterion/criterion.h>
#include <libft.h>

Test(lstadd_front, simple0) {
	int a1 = 1, a2 = 2, a3 = 3;
	t_list *node1 = ft_lstnew(&a1);
	t_list *node2 = ft_lstnew(&a2);
	t_list *node3 = ft_lstnew(&a3);
	ft_lstadd_front(&node3, node2);
	ft_lstadd_front(&node2, node1);
	t_list *curr = node1;
	int expected[] = {1, 2, 3};
	size_t index = 0;

	while (curr != NULLPTR)
	{
		cr_assert(*(int *)curr->content == expected[index]);
		curr = curr->next;
		index++;
	}
	free(node1);
	free(node2);
	free(node3);
}
