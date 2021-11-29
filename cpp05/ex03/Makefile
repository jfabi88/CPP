NAME		=	bureaucrat

SRCS		=	Bureaucrat.cpp \
				Form.cpp \
				main.cpp \
				PresidentialPardonForm.cpp \
				RobotomyRequestForm.cpp \
				ShrubberyCreationForm.cpp \
				Intern.cpp
	
OBJS		=	$(SRCS:.cpp=.o)

SHRU		= *_shrubbery

CPP			=	clang++

%.o:		%.cpp 
			$(CPP) $(CFLAGS)   -c $< -o $(<:.cpp=.o)

CFLAGS		=	-Wall -Wextra -Werror -std=c++98

RM			=	rm -f

all :		$(NAME)

$(NAME) :	$(OBJS)
			$(CPP) $(CFLAGS) -o $(NAME) $(OBJS) -I.

clean :		
			$(RM) $(OBJS) $(SHRU)

fclean 	:	clean
			$(RM) $(NAME)

re :		fclean all

.PHONY :	all clean fclean re