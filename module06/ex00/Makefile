NAME	=	converter

SRCS	=	main.cpp	Converter.cpp

OBJS	=	$(SRCS:%.cpp=%.o)

CXX		=	c++

CPPFLAGS	=	-Wall -Wextra -Werror -Wshadow -std=c++98 -I.

.PHONY	:	all clean fclean re

all		:	$(NAME)

$(NAME)	:	$(OBJS)
	$(CXX) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean	:
	@rm -f $(OBJS)

fclean	:	clean
	@$(RM) $(NAME)

re		:	fclean all
