# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfabi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/15 10:17:48 by jfabi             #+#    #+#              #
#    Updated: 2021/11/15 10:17:50 by jfabi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	iter

SRCS		=	main.cpp 
	
OBJS		=	$(SRCS:.cpp=.o)

CPP			=	clang++

%.o:		%.cpp 
			$(CPP) $(CFLAGS)   -c $< -o $(<:.cpp=.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++11

RM			=	rm -f

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean :		
			$(RM) $(OBJS)

fclean 	:	clean
			$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re
