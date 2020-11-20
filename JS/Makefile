# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oouklich <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/19 14:38:18 by oouklich          #+#    #+#              #
#    Updated: 2020/11/20 21:26:23 by oouklich         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


###			QUINES			###
COLLEEN = Colleen
GRACE = Grace
SULLY = Sully
QUINES = $(COLLEEN) $(GRACE) $(SULLY)

###			SOURCES			###
COLLEEN_SRC = $(addsuffix .js, $(COLLEEN))
GRACE_SRC = $(addsuffix .js, $(GRACE))
SULLY_SRC = $(addsuffix .js, $(SULLY))

.PHONY: all, clean, fclean, re
all: $(QUINES)

$(COLLEEN): $(COLLEEN_SRC)
	@{ echo '#!/usr/bin/env node'; cat $<; } > $@
	@chmod +x $@

$(GRACE): $(GRACE_SRC)
	@{ echo '#!/usr/bin/env node'; cat $<; } > $@
	@chmod +x $@

$(SULLY): $(SULLY_SRC)
	@{ echo '#!/usr/bin/env node'; cat $<; } > $@
	@chmod +x $@

clean:
	@rm -f $(QUINES)

fclean: clean


re: fclean all
