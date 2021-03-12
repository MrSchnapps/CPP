# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: judecuyp <judecuyp@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/19 13:39:01 by judecuyp          #+#    #+#              #
#    Updated: 2021/01/19 13:58:19 by judecuyp         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
SRCS = megaphone.cpp
OBJS = $(SRCS:.cpp=.o)
CXX = clang++
CXXFLAGS = -Wall -Wextra -Werror
RM = rm -rf

all: 		$(NAME)

$(NAME):	$(OBJS)
	@echo "Compiling $@"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
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

tests:
	./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
	@echo "____________________"
	./megaphone "shhhhh... I think the students are asleep..."
	@echo "____________________"
	./megaphone
	@echo "____________________"
	./megaphone coucou
	@echo "____________________"
	./megaphone "shhhhh... I think the students are asleep..." coucou
	

.PHONY: all fclean clean re rec tests