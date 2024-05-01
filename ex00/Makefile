# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/20 12:22:14 by lbehr             #+#    #+#              #
#    Updated: 2023/12/20 13:37:10 by lbehr            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:= megaphone
SRCS	:= megaphone.cpp
CC		:= c++
CFLAGS	:= -Wall -Werror -Wextra -std=c++98 -g3
RM		:= rm -rf

all		: $(NAME)

$(NAME)	: $(SRCS)
	$(CC) $< $(CFLAGS) -o $(NAME)

clean	:
	$(RM) $(NAME)

re		:	clean all

.PHONY: all clean re