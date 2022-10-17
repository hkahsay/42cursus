# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/10 15:27:55 by hkahsay           #+#    #+#              #
#    Updated: 2022/10/15 15:08:11 by hkahsay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	push_swap

SRCS =	src/main.c \
		src/checker.c \
		src/exit.c \
		src/nodes.c \
		src/operation_push.c \
		src/operation_rev_rotate.c \
		src/operation_rotate.c \
		src/operation_swap.c \
		src/ft_putstr.c \
		src/ft_putchar.c \
		src/sort_small.c \
		src/sort_big.c \
		src/push_swap.c \
		

LIBFT_DIR = libft
LIBFT = /libft/libft.a

PRINT_DIR = ft_print/
PRINT  = /ft_print/src/libftprintf.a

OBJS	=	$(SRCS:.c=.o)
CC		=	gcc
RM		=	rm -f

DEBUG	=	 -fno-omit-frame-pointer #-fsanitize=address
CFLAGS	=	-g -Wall -Wextra -Werror
INCLUDE	=	-L $(LIBFT_DIR) -lft -L $(PRINT_DIR) -lftprintf

all:	$(NAME)

$(NAME):	$(OBJS)
			$(MAKE) -C $(LIBFT_DIR)
			$(MAKE) -C $(PRINT_DIR)
			$(CC) $(OBJS) $(CFLAGS) $(DEBUG) $(INCLUDE) -o $(NAME)

clean:		
			${RM} ${OBJS}
			make clean -C $(LIBFT_DIR)
			make clean -C $(PRINT_DIR)

fclean:		clean
			${RM} $(NAME)
			make fclean -C $(LIBFT_DIR)
			make fclean -C $(PRINT_DIR)

re:			fclean all
.PHONY:		all clean fclean re  