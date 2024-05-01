# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 12:22:14 by lbehr             #+#    #+#              #
#    Updated: 2023/12/20 18:08:36 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= a.out
SRCS	:= Contact.cpp  main.cpp  PhoneBook.cpp
OBJS	:= $(SRCS:.c=.o)
CC		:= c++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98 -g3
RM		:= rm -rf

all		: $(NAME)

$(NAME)	: $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

clean	:
	$(RM) $(NAME)

re		:	clean all

.PHONY: all clean re