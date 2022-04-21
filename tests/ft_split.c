#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <stdio.h>

Test(split, simple0) {
	char *in = "___A_brave__________new_world_";
	char *expected[] = {
		"A",
		"brave",
		"new",
		"world",
		(void *) 0
	};
	char **actual = ft_split(in, '_');
	size_t aux_i = 0;
	while (actual[aux_i] != (void *) 0 && expected[aux_i] != (void *) 0) {
		cr_assert(eq(int, ft_strncmp(actual[aux_i], expected[aux_i], ft_strlen(expected[aux_i])), 0));
		free(actual[aux_i]);
		aux_i++;
	}
	free(actual);
}

Test(split, simple1) {
	char *in = "@@@@@W0W@x@,@.@@20008";
	char *expected[] = {
		"W0W",
		"x",
		",",
		".",
		"20008",
		(void *) 0
	};
	char **actual = ft_split(in, '@');
	size_t aux_i = 0;
	while (actual[aux_i] != (void *) 0 && expected[aux_i] != (void *) 0) {
		cr_assert(eq(int, ft_strncmp(actual[aux_i], expected[aux_i], ft_strlen(expected[aux_i])), 0));
		free(actual[aux_i]);
		aux_i++;
	}
	free(actual);
}
