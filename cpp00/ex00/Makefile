# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jfabi <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 15:46:55 by jfabi             #+#    #+#              #
#    Updated: 2021/10/24 15:47:54 by jfabi            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =	megaphone

SRCS =	megaphone.cpp

OBJS =	$(SRCS:.cpp=.o)

CPP =	clang++

%.o:	%.cpp
		$(CPP) $(CFLAGS) -c $< -o $(<:.cpp=.o)

CFLAGS =	-Wall -Wextra -Werror -std=c++98

RM =	rm -f

all:	$(NAME)

$(NAME):	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re