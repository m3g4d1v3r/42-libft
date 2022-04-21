#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <stdio.h>

Test(memchr, simple_arr) {
	char arr[] = "banana$antonina";
	cr_assert(ft_memchr(arr, '$', 4) == (void *) 0);
	cr_assert(ft_memchr(arr, '$', ft_strlen(arr)) == &arr[6]);
	cr_assert(ft_memchr(arr, 'x', ft_strlen(arr)) == (void *) 0);
	cr_assert(ft_memchr(arr, 'a', ft_strlen(arr)) == &arr[1]);
}
