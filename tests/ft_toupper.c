#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <bsd/string.h>
#include <stdio.h>

Test(toupper, simple_characters) {
	cr_assert(eq(int, ft_toupper('a'), 'A'));
	cr_assert(eq(int, ft_toupper('A'), 'A'));
	cr_assert(eq(int, ft_toupper('z'), 'Z'));
	cr_assert(eq(int, ft_toupper('Z'), 'Z'));
	cr_assert(ne(int, ft_toupper('A'), 'Z'));
}

Test(toupper, strange_character) {
	cr_assert(eq(int, ft_toupper('\0'), '\0'));
	cr_assert(eq(int, ft_toupper('\r'), '\r'));
	cr_assert(eq(int, ft_toupper('\f'), '\f'));
	cr_assert(eq(int, ft_toupper('\t'), '\t'));
}
