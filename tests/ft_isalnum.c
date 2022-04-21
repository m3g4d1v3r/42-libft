#include <criterion/criterion.h>
#include <libft.h>

Test(isalnum, zero) {
    cr_assert(ft_isalnum(0) == 0);
    cr_assert(ft_isalnum('0') == 1);
}

Test(isalnum, nine) {
    cr_assert(ft_isalnum('9') == 1);
}

Test(isalnum, a) {
    cr_assert(ft_isalnum('a') == 1);
    cr_assert(ft_isalnum('A') == 1);
}

Test(isalnum, z) {
    cr_assert(ft_isalnum('z') == 1);
    cr_assert(ft_isalnum('Z') == 1);
}

Test(isalnum, m) {
    cr_assert(ft_isalnum('m') == 1);
    cr_assert(ft_isalnum('M') == 1);
}

Test(isalnum, nonalnum) {
    cr_assert(ft_isalnum('\r') == 0);
    cr_assert(ft_isalnum('\n') == 0);
    cr_assert(ft_isalnum(10) == 0);
    cr_assert(ft_isalnum(-1) == 0);
    cr_assert(ft_isalnum(999999999) == 0);
}
