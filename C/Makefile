# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oouklich <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 14:38:18 by oouklich          #+#    #+#              #
#    Updated: 2020/11/19 23:35:17 by oouklich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


###			QUINES			###
COLLEEN = Colleen
GRACE = Grace
SULLY = Sully
QUINES = $(COLLEEN) $(GRACE) $(SULLY)

###			SOURCES			###
COLLEEN_SRC = $(addsuffix .c, $(COLLEEN))
GRACE_SRC = $(addsuffix .c, $(GRACE))
SULLY_SRC = $(addsuffix .c, $(SULLY))

###			OBJECTS			###
COLLEEN_OBJ = $(COLLEEN_SRC:%.c=$(OBJ_DIR)/%.o)
GRACE_OBJ = $(GRACE_SRC:%.c=$(OBJ_DIR)/%.o)
SULLY_OBJ = $(SULLY_SRC:%.c=$(OBJ_DIR)/%.o)

OBJ_DIR = obj

CFLAGS = -Werror -Wextra -Wall

CC = clang

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
