# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aakouhar <aakouhar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/26 20:33:25 by aakouhar          #+#    #+#              #
#    Updated: 2023/11/27 14:38:05 by aakouhar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = cc
FLAG = -Wall -Wextra -Werror

CFILES = ft_putchar.c ft_printf.c ft_print_char.c ft_print_hexup.c ft_print_str.c \
		 ft_print_hexlow.c ft_print_int.c ft_print_unsigned.c  ft_paddress.c
OBJ = $(CFILES:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
		ar rc $(NAME) $(OBJ)
clean :
		rm -f $(OBJ)
fclean : clean
		rm -f $(NAME)
re : fclean all
.PHONY : all clean fclean re