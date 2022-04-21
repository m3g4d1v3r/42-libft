#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <stdlib.h>
#include <libft.h>
#include <stdio.h>

Test(atoi, simple_atoi0) {
	char nptr[] = "42";
	cr_assert(ft_atoi(nptr) == atoi(nptr));
}

Test(atoi, simple_atoi1) {
	char nptr[] = "                  42                                ";
	cr_assert(ft_atoi(nptr) == atoi(nptr));
}

Test(atoi, simple_atoi2) {
	char nptr[] = " - -  -42 +++++++++++";
	cr_assert(ft_atoi(nptr) == atoi(nptr));
}

Test(atoi, simple_atoi3) {
	char nptr[] = "@";
	cr_assert(ft_atoi(nptr) == atoi(nptr));
}

Test(atoi, simple_atoi4) {
	char nptr[] = "123489140267341879020894671023460";
	cr_assert(ft_atoi(nptr) == atoi(nptr));
}

