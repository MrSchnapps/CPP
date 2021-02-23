# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/19 14:01:32 by judecuyp          #+#    #+#              #
#    Updated: 2021/02/23 13:09:13 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Serialization
SRCS = main.cpp
INCLUDES = .
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: 		$(NAME)

$(NAME):	
	@echo "Program creation"
	@$(CXX) $(CXXFLAGS) $(SRCS) -I $(INCLUDES) -o $(NAME) 
	@echo "Success"

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