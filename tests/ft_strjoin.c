#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>

Test(strjoin, simple0) {
	char prefix[] = "prefix_";
	char suffix[] = "suffix_$";
	char *expected = "prefix_suffix_$";
	char *actual = ft_strjoin(prefix, suffix);
	for (size_t i = 0; i < ft_strlen(expected); i++)
		cr_assert(eq(int, actual[i], expected[i]));
	free(actual);
}

Test(strjoin, edge0) {
	char *actual = ft_strjoin("", "");
	free(actual);
}
