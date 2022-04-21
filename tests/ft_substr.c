#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>

Test(substr, simple0) {
	char *substr = ft_substr("some wide long text...", 4, 11);
	char *expected_substr = " wide long ";
	for (size_t i = 0; i < 11; i++)
		cr_assert(eq(int, substr[i], expected_substr[i]));
	free(substr);
}

Test(substr, simple1) {
	char *substr = ft_substr("long long long text...", 15, 7);
	char *expected_substr = "text...";
	for (size_t i = 0; i < 7; i++)
		cr_assert(eq(int, substr[i], expected_substr[i]));
	free(substr);
}

Test(substr, edge0) {
	char *substr = ft_substr("some wide long text...", 0, 0);
	free(substr);
	cr_assert(eq(int, 0, 0));
}

