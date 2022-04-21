#include <criterion/criterion.h>
#include <libft.h>
#include <ctype.h>

Test(isdigit, zero) {
    cr_assert(ft_isdigit('0') == 1);
}

Test(isdigit, nine) {
    cr_assert(ft_isdigit('9') == 1);
}

Test(isdigit, nondigit) {
    cr_assert(ft_isdigit(10) == 0);
    cr_assert(ft_isdigit(-1) == 0);
    cr_assert(ft_isdigit(999999999) == 0);
}
