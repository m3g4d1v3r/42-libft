#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <string.h>

Test(strncmp, first_test) {
	cr_assert(eq(int, ft_strncmp("t", "", 0), 0));
	cr_assert(eq(int, ft_strncmp("aaaa", "aaaz", 4), strncmp("aaaa", "aaaz", 4)));
	cr_assert(eq(int, ft_strncmp("aaaa", "aaaz", 1), strncmp("aaaa", "aaaz", 1)));
	cr_assert(eq(int, ft_strncmp("aaaa", "waaa", 4), strncmp("aaaa", "waaa", 4)));
	cr_assert(eq(int, ft_strncmp("aaaa", "waaa", 1), strncmp("aaaa", "waaa", 4)));
}
