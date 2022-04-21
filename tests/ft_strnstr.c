#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <bsd/string.h>
#include <libft.h>
#include <stdio.h>

Test(strnstr, hash) {
	cr_assert(eq(int, ft_hash("hello", ft_strlen("hello")), 7258927));
}

Test(strnstr, rolling_hash) {
	cr_assert(eq(int, ft_rolling_hash('s', 'h', 1 << 4 * 4, ft_hash("hello", 5)), ft_hash("ellos", 5)));
	cr_assert(eq(int, ft_rolling_hash('x', 's', 1 << 4 * 6, ft_hash("suspiro", 7)), ft_hash("uspirox", 7)));
}

Test(strnstr, simple_needle_in_haystack) {
	char haystack_str[] = "haystack$cash?haystack";
	char *expected = strnstr(haystack_str, "$cash?", ft_strlen(haystack_str));
	char *actual = ft_strnstr(haystack_str, "$cash?", ft_strlen(haystack_str));
	cr_assert(actual == expected);
}

Test(strnstr, simple_needle_in_haystack_size) {
	char haystack_str[] = "haystack$cash?haystack#";
	char *expected = strnstr(haystack_str, "stack#", ft_strlen(haystack_str) - 1);
	char *actual = ft_strnstr(haystack_str, "stack#", ft_strlen(haystack_str) - 1);
	cr_assert(actual == expected);
}

Test(strnstr, entire_needle_is_haystack) {
	char haystack_str[] = "#";
	char needle_str[] = "#";
	char haystack_str2[] = "xasfhewuofuihwioeufhowiuehfoiuwheoi8736198765978678561afshdfgh";
	char needle_str2[] = "xasfhewuofuihwioeufhowiuehfoiuwheoi8736198765978678561afshdfgh";
	char *expected = strnstr(haystack_str, haystack_str, ft_strlen(haystack_str));
	char *actual = ft_strnstr(haystack_str, haystack_str, ft_strlen(haystack_str));
	cr_assert(actual == expected);
	char *expected2 = strnstr(haystack_str, haystack_str, ft_strlen(haystack_str));
	char *actual2 = ft_strnstr(haystack_str, haystack_str, ft_strlen(haystack_str));
	cr_assert(actual2 == expected2);
}

Test(strnstr, complex_needle_in_haystack0) {
	char haystack_str[] = "fffffffffffffffasaafff?af?";
	char needle_str[] = "aff?";
	char *expected = strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	char *actual = ft_strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	cr_assert(eq(ptr, actual, expected));
}

Test(strnstr, complex_needle_in_haystack1) {
	char haystack_str[] = "hhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhhaaaaahh?";
	char needle_str[] = "h?";
	char *expected = strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	char *actual = ft_strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	cr_assert(actual == expected);
}

Test(strnstr, complex_needle_in_haystack2) {
	char haystack_str[] = "axbb??#axbb?#axxb?#aaxb?#axbb??##love";
	char needle_str[] = "axbb??##";
	char *expected = strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	char *actual = ft_strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	cr_assert(actual == expected);
}

Test(strnstr, complex_needle_in_haystack3) {
	char haystack_str[] = "fafamafafabafa";
	char needle_str[] = "famafa";
	char *expected = strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	char *actual = ft_strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	cr_assert(actual == expected);
}

Test(strnstr, really_complex_needle_in_haystack0) {
	char haystack_str[] = "onionions#yes";
	char needle_str[] = "onions";
	char *expected = strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	char *actual = ft_strnstr(haystack_str, needle_str, ft_strlen(haystack_str));
	cr_assert(actual == expected);
}
