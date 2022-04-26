#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <stdio.h>

Test(memchr, simple_arr) {
	char arr[] = "banana$antonina";
	cr_assert(ft_memchr(arr, 0, 0) == (void *) 0);
	cr_assert(ft_memchr(arr, '$', 4) == (void *) 0);
	cr_assert(ft_memchr(arr, '$', ft_strlen(arr)) == &arr[6]);
	cr_assert(ft_memchr(arr, 'x', ft_strlen(arr)) == (void *) 0);
	cr_assert(ft_memchr(arr, 'a', ft_strlen(arr)) == &arr[1]);
	cr_assert(ft_memchr(arr, 'n', 2) == (void *) 0);
	cr_assert(ft_memchr(arr, 'n', 3) == &arr[2]);
}
