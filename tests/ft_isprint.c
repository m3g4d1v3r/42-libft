#include <criterion/criterion.h>
#include <libft.h>

Test(isprint, zero) {
    cr_assert(ft_isprint(0) == 0);
}

Test(isprint, white_space_characters) {
    cr_assert(ft_isprint(' ') == 1);
    cr_assert(ft_isprint('\f') == 0);
    cr_assert(ft_isprint('\n') == 0);
    cr_assert(ft_isprint('\r') == 0);
    cr_assert(ft_isprint('\t') == 0);
    cr_assert(ft_isprint('\v') == 0);
}


