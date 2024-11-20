NAME 	 = ScalarConverte

SRCS 	 = ScalarConverte.cpp

INCLUDES = ScalarConverte.hpp


OBJS     = $(SRCS: .cpp = .o)
CC       = c++
RM       = rm -rf
CPPFLAGS = -Wall -Wextra -Werror -std=c++98


%.o : %cpp ${INCLUDES}
		$(CC) $(CPPFLAGS) -g -c $< -o $@


all : $(NAME)

$(NAME) : $(OBJS)
				$(CC) $(OBJS) -o $(NAME)


clean : 		$(RM) $(OBJS)


flcean :		clean
						$(RM) $(NAME)


re :					fclean $(NAME)

.PHONY : all fclean clean re