#include <criterion/criterion.h>
#include <libft.h>

Test(memcpy, simple_ko_test) {
	char input_array[10];
	char output_array[10];
	char wrong_array[10];
	for (size_t i = 0; i < 10; i++)
	{
		input_array[i] = 'a' + i;
		wrong_array[i] = 'z';
	}
	ft_memcpy(output_array, input_array, 10);
	for (size_t j = 0; j < 10; j++)
	{
		cr_assert(output_array[j] != wrong_array[j]);
	}
}

Test(memcpy, simple_ok_test) {
	char input_array[10];
	char output_array[10];
	char expected_array[10];
	for (size_t i = 0; i < 10; i++)
	{
		input_array[i] = 'a' + i;
		expected_array[i] = 'a' + i;
	}
	ft_memcpy(output_array, input_array, 10);
	for (size_t j = 0; j < 10; j++)
	{
		cr_assert(output_array[j] == expected_array[j]);
	}
}

Test(memcpy, src_less_than_dst_overlap_ko_test) {
	char array[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'z', 'z', 'z', 'z', 'z'};
	char expected_array[] = {'0', '1', '2', '3', '4', '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
	ft_memcpy(&array[5], &array[0], 10);
	for (size_t i = 10; i < 15; i++)
	{
		cr_assert(array[i] != expected_array[i]);
	}
}
