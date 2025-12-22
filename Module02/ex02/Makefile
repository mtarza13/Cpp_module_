# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mtarza <mtarza@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/22 06:54:35 by mtarza            #+#    #+#              #
#    Updated: 2025/12/22 06:54:39 by mtarza           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = FixeD03

CC = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

SRC_FILES = main.cpp Fixed.cpp
SRC_OBJS = $(SRC_FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(SRC_OBJS)
	$(CC) $(FLAGS) $(SRC_OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -o $@ -c $<

clean:
	rm -f $(SRC_OBJS)

fclean: clean
	rm -f  $(NAME)

re: fclean all

.PHONY: all clean fclean re