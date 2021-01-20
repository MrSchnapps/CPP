# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/19 14:01:32 by judecuyp          #+#    #+#              #
#    Updated: 2021/01/20 16:19:30 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook
SRCS = PhoneBook.cpp  Contact.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: 		$(NAME)

$(NAME):	$(OBJS)
	@echo "Compiling $@"
	@$(CXX) $(CXXFLAGS) -I. -o $(NAME) $(OBJS)
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