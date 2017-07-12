# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sandruse <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/03/24 10:09:06 by sandruse          #+#    #+#              #
#    Updated: 2017/03/27 13:05:49 by sandruse         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_check_specuficator.c\
	  ft_cs_print.c\
	  ft_main_printf.c\
	  ft_p_print.c\
	  ft_print_did.c\
	  ft_putchar_count.c\
	  ft_rozpodil.c\
	  ft_strdup_bit.c\
	  ft_uo_print.c\
	  ft_bzero.c\
	  ft_itoa_base.c\
	  ft_itoa_base_unsigned.c\
	  ft_memset.c\
	  ft_strchr.c\
	  ft_strcmp.c\
	  ft_tolower.c\
	  ft_tolowstr.c\
	  ft_atoi.c\
	  ft_isdigit.c\
	  ft_strsub.c\
	  ft_atoi_base.c\
	  ft_strnew.c\
	  ft_strlen.c\
	  ft_capital.c\
	  ft_undef.c
GG = $(SRC:.c=.o)
HEAD = ft_printf.h
FLAG = -c -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(GG)
	ar rc $(NAME) $(GG)
	ranlib $(NAME)

%.o: %c $(HEAD)
	gcc -o $(NAME) $(FLAG) $@ $<

clean:
	rm -f $(GG)

fclean: clean
	rm -f $(NAME)

re: fclean all
