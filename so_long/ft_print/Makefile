NAME = libftprintf.a
SRCS =	src/ft_printf.c\
		src/ft_print_u.c\
		src/ft_print_ptr.c\
		src/ft_print_hex.c\
		src/ft_print_unsigned.c\

CFLAGS = -Wall -Wextra -Werror
OBJS = ${SRCS:.c=.o}
AR = ar rc
RM = rm -f
LIBFT_PATH = $(PARENT_DIR)

all: ${NAME}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}
	
re: fclean all
.PHONY: all clean fclean re