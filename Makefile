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
		  ft_strchr.c
INCD	= ./
OBJS	= ${SRCS:.c=.o}
NAME	= libft.a

CC		= gcc
RM		= rm -f

CFLAGS	= -Wall -Werror -Wextra -I${INCD}

%.o:		${SRCD}%.c
			${CC} ${CFLAGS} -c $< -o $@

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

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
			gcc tests/*.c -L. -lbsd -lft -lcriterion -I. -o tests/tests.out
			tests/tests.out && rm tests/tests.out
