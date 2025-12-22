# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/22 06:53:54 by mtarza            #+#    #+#              #
#    Updated: 2025/12/22 06:54:00 by mtarza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= FixeD01

SRCS		= main.cpp Fixed.cpp
OBJS		= $(SRCS:.cpp=.o)

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM			= rm -f

all:		$(NAME)

$(NAME):	$(OBJS)
			$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
