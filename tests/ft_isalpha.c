#include <criterion/criterion.h>
#include <libft.h>

Test(isalpha, zero) {
    cr_assert(ft_isalpha(0) == 0);
}

Test(isalpha, a) {
    cr_assert(ft_isalpha('a') == 1);
    cr_assert(ft_isalpha('A') == 1);
}

Test(isalpha, z) {
    cr_assert(ft_isalpha('z') == 1);
    cr_assert(ft_isalpha('Z') == 1);
}

Test(isalpha, m) {
    cr_assert(ft_isalpha('m') == 1);
    cr_assert(ft_isalpha('M') == 1);
}

Test(isalpha, nonalpha) {
    cr_assert(ft_isalpha('\r') == 0);
    cr_assert(ft_isalpha('\t') == 0);
    cr_assert(ft_isalpha('\n') == 0);
}
