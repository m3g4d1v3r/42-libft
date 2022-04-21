#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <bsd/string.h>
#include <stdio.h>

Test(strchr, simple_array) {
	char test_arr[] = "hello";
	cr_assert(ft_strchr(test_arr, 'h') == &test_arr[0]);
	cr_assert(ft_strchr(test_arr, 'e') == &test_arr[1]);
	cr_assert(ft_strchr(test_arr, 'l') == &test_arr[2]);
	cr_assert(ft_strchr(test_arr, 'o') == &test_arr[4]);
	cr_assert(ft_strchr(test_arr, '\0') == &test_arr[5]);
}

Test(strchr, obvious_array) {
	char test_arr[] = "aaaaaaaaaa";
	cr_assert(ft_strchr(test_arr, 'a') == &test_arr[0]);
}

Test(strchr, with_little_complexity) {
	char test_arr[] = "hello\0xyz";
	cr_assert(ft_strchr(test_arr, 'x') == (void *) 0);
	cr_assert(ft_strchr(test_arr, 'y') == (void *) 0);
	cr_assert(ft_strchr(test_arr, 'z') == (void *) 0);
}
