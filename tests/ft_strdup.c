#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <bsd/string.h>
#include <libft.h>
#include <stdio.h>

Test(strdup, ok) {
	char	str[] = "abacate_muito_doido";
	char	expected[] = "abacate_muito_doido";
	char	*actual = ft_strdup(str);
	for (size_t i = 0; i < ft_strlen(str); i++)
		cr_assert(eq(int, actual[i], expected[i]));
	free(actual);
}

Test(strdup, ko) {
	char	str[] = "abacate_muito_doido";
	char	expected[] = "abacate_muito_louco";
	char	*actual = ft_strdup(str);
	for (size_t i = 0; i < 14; i++)
		cr_assert(eq(int, actual[i], expected[i]));
	cr_assert(ne(int, actual[14], expected[14]));
	free(actual);
}
