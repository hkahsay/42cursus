NAME =		libftprintf.a
SRCS = src/ft_printf.c\
		src/ft_print_u.c\
		src/ft_print_ptr.c\
		src/ft_print_hex.c\
		src/ft_print_unsigned.c\

INCLUDE	=	include	
LIBFT = libft

OBJS = ${SRCS:.c=.o}

CC =		gcc
CFLAGS = 			-Wall -Wextra -Werror 

.c.o:		
			${CC} ${CFLAGS} -I $(INCLUDE) -c $< -o ${<:.c=.o}

$(NAME):	${OBJS}
			$(MAKE) -C $(LIBFT)
			cp $(LIBFT)/$(LIBFT).a $(NAME)
			ar rcs ${NAME} ${OBJS}
all:		${NAME} 			

clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f ${NAME}

re:			fclean all

.PHONY:		all clean fclean re