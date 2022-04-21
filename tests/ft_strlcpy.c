#include <criterion/criterion.h>
#include <criterion/new/assert.h>
#include <libft.h>
#include <bsd/string.h>

Test(strlcpy, simple) {
	char src[] = "hello";
	char dst_expected[] = "hello";
	char dst_legacy[] = "12345";
	char dst_actual[] = "12345";
	size_t res_legacy, res_actual;

	res_legacy = strlcpy(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcpy(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_expected));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
}

Test(strlcpy, strange_characters) {
	char src[] = "hello\r\t\f";
	char dst_expected[] = "hello\r\t\f";
	char dst_legacy[] = "12345678";
	char dst_actual[] = "12345678";
	size_t res_legacy, res_actual;

	res_legacy = strlcpy(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcpy(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_expected));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
}

Test(strlcpy, truncate_test) {
	char src[] = "hello\r\t\f";
	char dst_legacy[] = "123";
	char dst_actual[] = "123";
	size_t res_legacy, res_actual;

	res_legacy = strlcpy(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcpy(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
	// Here follows the check for truncation
	cr_assert(ge(int, res_legacy, sizeof(dst_legacy)));
	cr_assert(ge(int, res_actual, sizeof(dst_actual)));
}

Test(strlcpy, dst_larger_than_src_test) {
	char src[] = "hell";
	char dst_legacy[] = "123456789";
	char dst_actual[] = "123456789";
	size_t res_legacy, res_actual;

	res_legacy = strlcpy(dst_legacy, src, sizeof(dst_legacy));
	res_actual = ft_strlcpy(dst_actual, src, sizeof(dst_actual));
	cr_assert(eq(str, dst_actual, dst_legacy));
	cr_assert(eq(int, res_actual, res_legacy));
	// Here follows the check for no-truncation
	cr_assert(lt(int, res_legacy, sizeof(dst_legacy)));
	cr_assert(lt(int, res_actual, sizeof(dst_actual)));
}
