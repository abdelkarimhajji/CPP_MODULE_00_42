# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ahajji <ahajji@student.1337.ma>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/18 12:47:02 by ahajji            #+#    #+#              #
#    Updated: 2023/11/18 13:06:48 by ahajji           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= megaphone

SRC		= megaphone.cpp
OBJ		= $(SRC:.cpp=.o)

CPP		=	c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++98


%.o : %.cpp
	@$(CPP) $(CPPFLAGS) -c $< -o $@

$(NAME) : $(OBJ)
	@$(CPP) $(CPPFLAGS) $(OBJ) -o $(NAME)

all : $(NAME)


clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY : all clean fclean re