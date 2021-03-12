# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/19 14:01:32 by judecuyp          #+#    #+#              #
#    Updated: 2021/01/29 16:49:03 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = replace
SRCS = srcs/Replace.cpp
SRCS_DIR = srcs/
HEADER_DIR = ./includes
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: 		$(NAME)

$(NAME):	$(OBJS)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "Success"

$(SRCS_DIR)%.o:		$(SRCS_DIR)%.cpp 
	@echo "Compiling $<"
	@$(CXX) $(CXXFLAGS) -I $(HEADER_DIR) -c $< -o $@

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