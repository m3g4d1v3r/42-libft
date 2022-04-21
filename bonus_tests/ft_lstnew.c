#include <criterion/criterion.h>
#include <libft.h>

Test(lstnew, simple0) {
	char subarray[] = "Coding while listening to music is cool";
	t_list *lst = ft_lstnew(subarray);
	char *ptr = lst->content;
	size_t index = 0;
	while (ptr[index] != '\0') {
		cr_assert(ptr[index] == subarray[index]);
		index++;
	}
	cr_assert(lst->next == NULLPTR);
	free(lst);
}

