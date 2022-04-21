#include <criterion/criterion.h>
#include <libft.h>

Test(isascii, zero) {
    cr_assert(ft_isascii(0x0) == 1);
}

Test(isascii, common_value) {
    cr_assert(ft_isascii('z') == 1);
}

Test(isascii, limit_value) {
    cr_assert(ft_isascii(127) == 1);
    cr_assert(ft_isascii(0x7f) == 1);
}

Test(isascii, more_than_seven_bits) {
    cr_assert(ft_isascii(128) == 0);
    cr_assert(ft_isascii(0x80) == 0);
    cr_assert(ft_isascii(0xff) == 0);
}
