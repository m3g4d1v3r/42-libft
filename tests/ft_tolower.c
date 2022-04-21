#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <bsd/string.h>
#include <stdio.h>

Test(tolower, simple_characters) {
	cr_assert(eq(int, ft_tolower('A'), 'a'));
	cr_assert(eq(int, ft_tolower('a'), 'a'));
	cr_assert(eq(int, ft_tolower('Z'), 'z'));
	cr_assert(eq(int, ft_tolower('z'), 'z'));
	cr_assert(ne(int, ft_tolower('a'), 'z'));
}

Test(tolower, strange_character) {
	cr_assert(eq(int, ft_tolower('\0'), '\0'));
	cr_assert(eq(int, ft_tolower('\r'), '\r'));
	cr_assert(eq(int, ft_tolower('\f'), '\f'));
	cr_assert(eq(int, ft_tolower('\t'), '\t'));
}
