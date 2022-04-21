#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <stdio.h>

Test(memcmp, simple_arr) {
	cr_assert(eq(int, ft_memcmp("aaaa", "aaaz", 4), memcmp("aaaa", "aaaz", 4)));
	cr_assert(eq(int, ft_memcmp("aaaa", "aaaz", 1), memcmp("aaaa", "aaaz", 1)));
	cr_assert(eq(int, ft_memcmp("aaaa", "waaa", 4), memcmp("aaaa", "waaa", 4)));
	cr_assert(eq(int, ft_memcmp("aaaa", "waaa", 1), memcmp("aaaa", "waaa", 4)));
}
