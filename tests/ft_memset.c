#include <criterion/criterion.h>
#include <libft.h>

Test(memset, zero) {
    cr_assert(ft_memset((void *) 0, 0, 0) == (void *) 0);
}

Test(memset, simple_chr_array) {
	char input_array[10];
	char expected_array[10];
	for (int i = 0; i < 10; i++)
	{
		input_array[i] = 'a' + i;
		expected_array[i] = 'z';
	}
	cr_assert(ft_memset(input_array, 'z', 10) == input_array);
	for (int j = 0; j < 10; j++)
	{
		cr_assert(input_array[j] == expected_array[j]);
	}
}


