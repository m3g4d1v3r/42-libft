#include <criterion/criterion.h>
#include <libft.h>

Test(strlen, zero) {
    cr_assert(ft_strlen("") == 0);
}

Test(strlen, simple) {
    cr_assert(ft_strlen("a") == 1);
}

Test(strlen, hello_world) {
    cr_assert(ft_strlen("Hello World!\n") == 13);
}


