SRCD	= srcs/
SRCS	= ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_memcpy.c \
		  ft_memmove.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcmp.c \
		  ft_strnstr.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_split.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c
OBJS	= ${SRCS:.c=.o}
BONUS	= ft_lstnew.c \
		  ft_lstadd_front.c \
		  ft_lstsize.c \
		  ft_lstlast.c \
		  ft_lstadd_back.c \
		  ft_lstdelone.c \
		  ft_lstclear.c
BOBJS	= ${BONUS:.c=.o}
INCD	= ./
NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -g -Wall -Werror -Wextra -I${INCD}
VALGRIND = --trace-children=yes --leak-check=full --quiet --fair-sched=yes

%.o:		${SRCD}%.c
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

bonus:		${NAME} ${BOBJS}
			ar rcs ${NAME} ${BOBJS}

all:		${NAME}

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all clean fclean re

check:
			norminette ft_*.c libft.h -R CheckForbiddenSourceHeader

test:		${NAME}
			gcc -g tests/*.c -L. -lbsd -lft -lcriterion -I. -o tests.out
			./tests.out && rm tests/tests.out

bonus_test:	bonus
			gcc -g bonus_tests/*.c -L. -lbsd -lft -lcriterion -I. -o tests.out
			./tests.out && rm tests/tests.out


valtest:	${NAME}
			gcc -g tests/*.c -L. -lbsd -lft -lcriterion -I. -o tests.out
			time valgrind ${VALGRIND} ./tests.out && rm tests.out

bonvaltest:	bonus
			gcc -g bonus_tests/*.c -L. -lbsd -lft -lcriterion -I. -o tests.out
			time valgrind ${VALGRIND} ./tests.out && rm tests.out

