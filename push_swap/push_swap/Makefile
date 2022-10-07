
NAME = push_swap
SRCS = *.c

INCLUDE	=	include	
LIBFT = ./ft_print/libft/libft.a
PRINT  = ./ft_print/libftprintf.a

OBJS = ${SRCS:.c=.o}
RM = rm -f

CC =		gcc
CFLAGS = 			-Wall -Wextra -Werror -g -fsanitize=address

# .c.o:		
# 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

#$(NAME):	${OBJS} $(LIBFT) $(PRINT) push_swap
			

# $(LIBFT): 
# 		make -C ft_print/libft

# $(PRINT):
# 		make -C ft_print/libftprintf
all:	$(NAME)

$(NAME):
		$(MAKE) -C ./ft_print/libft 
		$(MAKE) -C ./ft_print
		$(CC) $(SRCS) $(LIBFT) $(PRINT) $(CFLAG) -o $(NAME)


clean:		
			${RM} ${OBJS}
			make clean -C ./ft_print/libft
			make clean -C ./ft_print

fclean:		clean
					${RM} $(NAME)
					make fclean -C ./ft_print/libft 
					make fclean -C ./ft_print

re:			fclean all

.PHONY:		all clean fclean re  