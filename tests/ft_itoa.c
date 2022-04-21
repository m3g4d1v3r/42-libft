#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>

Test(itoa, simple_itoa0) {
	int input = 42;
	char expected[] = "42";
	char *res = ft_itoa(input);
	cr_assert(strcmp(res, expected) == 0);
	free(res);
}

Test(itoa, simple_itoa1) {
	int input = -42;
	char expected[] = "-42";
	char *res = ft_itoa(input);
	cr_assert(strcmp(res, expected) == 0);
	free(res);
}

Test(itoa, simple_itoa2) {
	int input = -989876;
	char expected[] = "-989876";
	char *res = ft_itoa(input);
	cr_assert(strcmp(res, expected) == 0);
	free(res);
}
