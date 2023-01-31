# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gyumpark <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/01 14:50:41 by gyumpark          #+#    #+#              #
#    Updated: 2022/04/01 14:50:43 by gyumpark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS		=	./ft_printf/ft_printf.c\
			./ft_printf/ft_printf_utils.c\
			./ft_printf/ft_form_p.c\
			./ft_printf/ft_form_d_i.c\
			./ft_printf/ft_form_u.c\
			./ft_printf/ft_form_x_1.c\
			./ft_printf/ft_form_x_2.c\
			./Libft/ft_putchr.c\
			./Libft/ft_putstr.c\
			./Libft/ft_putnbr.c

OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
AR = ar rcs
LIBFTDIR = ./Libft

all : $(NAME)

$(NAME) : $(OBJS)
						make bonus -C $(LIBFTDIR)
						cp $(LIBFTDIR)/libft.a $@
						$(AR) $@ $^

clean :
						make clean -C $(LIBFTDIR)
						$(RM) $(OBJS)

fclean : clean
						make fclean -C $(LIBFTDIR)
						$(RM) $(NAME)

re : fclean all

.PHONY : all clean fclean re
