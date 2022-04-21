#include <criterion/criterion.h>
#include <stdio.h>
#include <libft.h>

Test(fd, putchar) {
	FILE *fp;
	char buf[255];
	fp = fopen("/tmp/test_putchar.txt", "w+");
	ft_putchar_fd('4', fileno(fp));
	fseek(fp, 0, SEEK_SET);
	cr_assert(fgetc(fp) == '4');
}

Test(fd, putstr) {
	FILE *fp;
	char buf[255];
	fp = fopen("/tmp/test_putstr.txt", "w+");
	ft_putstr_fd("42", fileno(fp));
	fseek(fp, 0, SEEK_SET);
	fgets(buf, 5, fp);
	cr_assert(strcmp(buf, "42") == 0);
}

Test(fd, putendl) {
	FILE *fp;
	char buf[255];
	fp = fopen("/tmp/test_putendl.txt", "w+");
	ft_putendl_fd("42", fileno(fp));
	fseek(fp, 0, SEEK_SET);
	fgets(buf, 5, fp);
	cr_assert(strcmp(buf, "42\n") == 0);
}

Test(fd, putnbr) {
	FILE *fp;
	char buf[255];
	fp = fopen("/tmp/test_putnbr.txt", "w+");
	ft_putnbr_fd(42, fileno(fp));
	fseek(fp, 0, SEEK_SET);
	fgets(buf, 5, fp);
	cr_assert(strcmp(buf, "42") == 0);
}
