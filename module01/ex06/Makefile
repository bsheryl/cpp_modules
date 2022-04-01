NAME	=	karenFilter

SRCS	=	main.cpp	Karen.cpp

OBJS	=	$(SRCS:%.cpp=%.o)

CXX		=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -std=c++98 -I.

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJS) $(HEADER)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
	@rm -f $(OBJS)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
