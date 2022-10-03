
NAME =		push_swap
SRCS = *.c

INCLUDE	=	include	
LIBFT = ./ft_print/libft/libft.a
PRINT  = ./ft_print/libftprintf.a

OBJS = ${SRCS:.c=.o}
RM = rm -f

CC =		gcc
CFLAGS = 			-Wall -Wextra -Werror 

.c.o:		
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

#$(NAME):	${OBJS} $(LIBFT) $(PRINT) push_swap
			

all:		$(NAME)

$(NAME):  $(LIBFT) $(PRINT)
		$(CC) $(CFLAG) $(SRCS) ${OBJS} $(LIBFT) $(PRINT) -o $(NAME)

$(LIBFT): 
		make -C ft_print/libft

$(PRINT):
		make -C ft_print/libftprintf


clean:		
			rm -f ${OBJS}

fclean:		clean
			rm -f 

re:			fclean all

.PHONY:		all clean fclean re  