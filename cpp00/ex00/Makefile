# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: niki <niki@student.codam.nl>                 +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/26 18:57:16 by niki          #+#    #+#                  #
#    Updated: 2020/10/26 14:00:47 by nphilipp      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

SRC = megaphone.cpp

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME): 
	clang++ $(FLAGS) $(SRC) -o $(NAME)

clean:

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

