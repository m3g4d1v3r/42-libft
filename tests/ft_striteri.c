#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>

void plus_2_ptr(t_uint index, char *chr) {
	*chr = (*chr + 2);
}

void plus_index_ptr(t_uint index, char *chr) {
	*chr = (*chr + index);
}

Test(striteri, simple_striteri0) {
	char str[] = "abacate";
	char expected[] = "cdcecvg";

	ft_striteri(str, plus_2_ptr);
	cr_assert(strcmp(str, expected) == 0);
}

Test(striteri, simple_striteri1) {
	char str[] = "0000000000";
	char expected[] = "0123456789";
	
	ft_striteri(str, plus_index_ptr);
	cr_assert(strcmp(str, expected) == 0);
}
