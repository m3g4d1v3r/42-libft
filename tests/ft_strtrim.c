#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>

Test(strtrim, simple0) {
	char *in = "$1$";
	char *expected = "1";
	char *actual = ft_strtrim(in, "z$!_");
	for (size_t i = 0; i < ft_strlen(expected); i++)
		cr_assert(eq(int, actual[i], expected[i]));
	free(actual);
}

Test(strtrim, simple1) {
	char *in = "!z$_prefix_suffix_$z!";
	char *expected = "prefix_suffix";
	char *actual = ft_strtrim(in, "z$!_");
	for (size_t i = 0; i < ft_strlen(expected); i++)
		cr_assert(eq(int, actual[i], expected[i]));
	free(actual);
}

Test(strtrim, edge0) {
	char *in = "";
	char *expected = "";
	char *actual = ft_strtrim(in, "z$!_");
	cr_assert(eq(int, ft_strlen(actual), 0));
	free(actual);
}
