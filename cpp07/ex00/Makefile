# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/19 14:01:32 by judecuyp          #+#    #+#              #
#    Updated: 2021/02/25 18:39:47 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = whatever
SRCS = main.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -rf

$(NAME):
	@echo "Program creation"
	@$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME) 
	@echo "Success"

all: 		$(NAME)

clean:
	@echo "Removing .o"
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

rec: fclean $(NAME)
	@echo "Removing .o"
	$(RM) $(OBJS)

.PHONY: all fclean clean re rec