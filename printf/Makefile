# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ualcibar <ualcibar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/05 11:14:09 by ualcibar          #+#    #+#              #
#    Updated: 2021/10/26 19:39:45 by ualcibar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CNAME	= libftprintf.a
SRCS	= ft_printf.c\
		  ft_printers.c\

OBJS	= $(SRCS:%.c=%.o)
INCLUDES = ft_printf.h
AR	= ar rcs
CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
$(OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
$(NAME): $(OBJS) $(INCLUDES)
	$(MAKE) -C			libft
	cp libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $(NAME) $(OBJ)
all:	$(NAME)
clean:
	$(RM) $(OBJS)
fclean: clean
	$(RM) $(NAME) libft.a
re: fclean all
.PHONY: all clean fclean re .c.o