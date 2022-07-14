# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lel-khou <lel-khou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/13 11:04:16 by lel-khou          #+#    #+#              #
#    Updated: 2022/07/14 18:16:58 by lel-khou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = GCC

CFLAGS = -Wall -Werror -Wextra

HEADER = header.h

LIBFT = libft.a

LIBS = -L./libft -lft

RM = rm -f

NAME = push_swap

SRC = main.c error_check.c ft_swap.c

OBJS = $(SRC:.c=.o)

all : $(LIBFT) $(NAME)

$(LIBFT) :
	make -C libft
	
$(NAME) : $(OBJS)
	$(CC) $(OBJS) $(LIBS) -o $(NAME)
	
clean :
	$(RM) $(OBJS)
	@make clean -C libft
	
fclean: clean
	$(RM) $(NAME)
	@make fclean -C libft

re : fclean all