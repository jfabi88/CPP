# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfabi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/08 18:13:32 by jfabi             #+#    #+#              #
#    Updated: 2021/11/08 18:13:33 by jfabi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	cara

SRCS		=	main.cpp \
				Karen.cpp

OBJS		=	$(SRCS:.cpp=.o)

CPP			=	clang++

%.o:		%.cpp 
			$(CPP) $(CFLAGS) -c $< -o $(<:.cpp=.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

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
