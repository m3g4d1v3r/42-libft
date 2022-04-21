#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>
#define BIG_ARRAY_NB 2 << 10

Test(calloc, functional_test) {
	size_t nmemb = BIG_ARRAY_NB;
	size_t size = BIG_ARRAY_NB;

	t_uchar *expected = (t_uchar *) calloc(nmemb, size);
	t_uchar *actual = (t_uchar *) ft_calloc(nmemb, size);
	for (size_t i = 0; i < nmemb * size; i++)
		cr_assert(actual[i] == expected[i]);
	free(actual);
	free(expected);
}

Test(calloc, overflow_test) {
	size_t nmemb = SIZE_MAX;
	size_t size = SIZE_MAX;

	t_uchar *expected = (t_uchar *) calloc(nmemb, size);
	t_uchar *actual = (t_uchar *) ft_calloc(nmemb, size);
	cr_assert(actual == expected);
	free(actual);
	free(expected);
}


