# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hkahsay <hkahsay@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/15 20:19:13 by hkahsay           #+#    #+#              #
#    Updated: 2022/11/11 14:25:48 by hkahsay          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = so_long
SRCS = 	src/game.c \
		src/init_data.c \
		src/main.c \
		src/get_next_line.c \
		src/get_next_line_utils.c \
		src/utils.c \
		src/check_error.c \
		src/hooks.c \
		src/moves.c \
		
#SRCS			= $(wildcard *.c)	

OBJS			= ${SRCS:.c=.o}	

CC				= gcc

RM				= rm -f

LIBFT_DIR		= libft

LIBFT			= /libft/libft.a

PRINT_DIR 		= ft_print/

PRINT			= /ft_print/src/libftprintf.a

CFLAGS			= -g -Wall -Werror -Wextra #-fsanitize=address 

INCLUDE			= -L $(LIBFT_DIR) -lft -L $(PRINT_DIR) -lftprintf

M_FRAMEWORK		= -framework OpenGL -framework AppKit

MLXPATH			= ./mlx/

INCLUDEMLX		= -I ${MLXPATH}

LMLX			= -L ${MLXPATH} -lmlx


#Rules

all: 	${NAME}

.c.o:
		$(CC) ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			$(MAKE) -C $(LIBFT_DIR)
			$(MAKE) -C $(PRINT_DIR)
			${MAKE} -C ${MLXPATH}
			${CC} ${CFLAGS} ${OBJS} ${M_FRAMEWORK} ${INCLUDEMLX} ${LMLX} ${INCLUDE} -o ${NAME} 
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
			