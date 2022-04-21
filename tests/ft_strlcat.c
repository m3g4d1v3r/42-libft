#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <bsd/string.h>

Test(strlcat, simple) {
	char src[] = "hello";
	char dst_expected[] = "42 header texthello";
	char dst_legacy[20] = "42 header text";
	char dst_actual[20] = "42 header text";
	size_t res_legacy, res_actual;

	res_legacy = strlcat(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcat(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_expected));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
}

Test(strlcat, strange_characters) {
	char src[] = "hello\r\t\f";
	char dst_expected[] = "42 header texthello\r\t\f";
	char dst_legacy[23] = "42 header text";
	char dst_actual[23] = "42 header text";
	size_t res_legacy, res_actual;

	res_legacy = strlcat(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcat(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_expected));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
}

Test(strlcat, truncate_test) {
	char src[] = "hello\r\t\f";
	char dst_legacy[10] = "123\0";
	char dst_actual[10] = "123\0";
	size_t res_legacy, res_actual;

	res_legacy = strlcat(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcat(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
	// Here follows the check for truncation
	cr_assert(ge(int, res_legacy, sizeof(dst_legacy)));
	cr_assert(ge(int, res_actual, sizeof(dst_actual)));
}

Test(strlcat, dst_larger_than_src_trunc_test) {
	char src[] = "hell";
	char dst_legacy[] = "123456789";
	char dst_actual[] = "123456789";
	size_t res_legacy, res_actual;

	res_legacy = strlcat(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcat(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
	// Here follows the check for truncation
	cr_assert(ge(int, res_legacy, sizeof(dst_legacy)));
	cr_assert(ge(int, res_actual, sizeof(dst_actual)));
}
