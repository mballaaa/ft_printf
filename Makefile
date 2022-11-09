# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mballa <mballa@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/03 17:47:50 by mballa            #+#    #+#              #
#    Updated: 2022/11/09 10:36:27 by mballa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libftprintf.a
SRCS=    ft_printf.c helper_func.c ft_putnbrunsg.c ft_printpercen.c

OBJS	= ${SRCS:%.c=%.o}

CFLAGS	= -Wall -Wextra -Werror

$(NAME): $(OBJS)
	gcc $(CFLAGS) -c $(SRCS) 
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all