#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>

char plus_2_ptr(t_uint index, char *chr) {
	(void) index;
	return (*chr + 2);
}

char plus_index_ptr(t_uint index, char *chr) {
	return (*chr + index);
}

Test(striteri, simple_striteri0) {
	char str[] = "abacate";
	char expected[] = "cdcecvg";

	char *actual = ft_striteri(str, plus_2_ptr);
	cr_assert(strcmp(actual, expected) == 0);
	free(actual);
}

Test(striteri, simple_striteri1) {
	char str[] = "0000000000";
	char expected[] = "0123456789";
	
	char *actual = ft_striteri(str, plus_index_ptr);
	cr_assert(strcmp(actual, expected) == 0);
	free(actual);
}
