#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>

char plus_2(t_uint index, char chr) {
	(void) index;
	return (chr + 2);
}

char plus_index(t_uint index, char chr) {
	return (chr + index);
}

Test(strmapi, simple_strmapi0) {
	char str[] = "abacate";
	char expected[] = "cdcecvg";

	char *actual = ft_strmapi(str, plus_2);
	cr_assert(strcmp(actual, expected) == 0);
	free(actual);
}

Test(strmapi, simple_strmapi1) {
	char str[] = "0000000000";
	char expected[] = "0123456789";
	
	char *actual = ft_strmapi(str, plus_index);
	cr_assert(strcmp(actual, expected) == 0);
	free(actual);
}
