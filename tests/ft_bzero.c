#include <criterion/criterion.h>
#include <libft.h>
#define BIG_NB 1 << 15

Test(bzero, simple_chr_array) {
	char input_array[10];
	char expected_array[10];
	for (size_t i = 0; i < 10; i++)
	{
		input_array[i] = 'a' + i;
		expected_array[i] = '\0';
	}
	ft_bzero(input_array, 10);
	for (size_t j = 0; j < 10; j++)
	{
		cr_assert(input_array[j] == expected_array[j]);
	}
}

Test(bzero, extended_chr_array) {
	char input_array[BIG_NB];
	char expected_array[BIG_NB];
	for (size_t i = 0; i < BIG_NB; i++)
	{
		input_array[i] = 'a' + i;
		expected_array[i] = '\0';
	}
	ft_bzero(input_array, BIG_NB);
	for (size_t j = 0; j < BIG_NB; j++)
	{
		cr_assert(input_array[j] == expected_array[j]);
	}
}

