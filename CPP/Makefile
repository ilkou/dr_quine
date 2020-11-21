# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oouklich <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 14:38:18 by oouklich          #+#    #+#              #
#    Updated: 2020/11/20 21:40:15 by oouklich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


###			QUINES			###
COLLEEN = Colleen
GRACE = Grace
SULLY = Sully
QUINES = $(COLLEEN) $(GRACE) $(SULLY)

###			SOURCES			###
COLLEEN_SRC = $(addsuffix .cpp, $(COLLEEN))
GRACE_SRC = $(addsuffix .cpp, $(GRACE))
SULLY_SRC = $(addsuffix .cpp, $(SULLY))

###			OBJECTS			###
COLLEEN_OBJ = $(COLLEEN_SRC:%.c=$(OBJ_DIR)/%.o)
GRACE_OBJ = $(GRACE_SRC:%.c=$(OBJ_DIR)/%.o)
SULLY_OBJ = $(SULLY_SRC:%.c=$(OBJ_DIR)/%.o)

OBJ_DIR = obj

CFLAGS = -Werror -Wextra -Wall

CC = g++

.PHONY: all, clean, fclean, re
all: $(QUINES)

$(COLLEEN): $(COLLEEN_OBJ)
	@$(CC) $(CFLAGS) $< -o $@

$(GRACE): $(GRACE_OBJ)
	@$(CC) $(CFLAGS) $< -o $@

$(SULLY): $(SULLY_OBJ)
	@$(CC) $(CFLAGS) $< -o $@

$(OBJ_DIR)/%.o: %.c | $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	@mkdir $@

clean:
	@rm -rf $(OBJ_DIR)

fclean: clean
	@rm -f $(QUINES)


re: fclean all
