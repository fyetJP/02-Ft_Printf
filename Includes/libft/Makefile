# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 17:02:04 by jpires-p          #+#    #+#              #
#    Updated: 2022/05/12 02:12:15 by jpires-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror
NORMFSH		= norminette -R CheckForbiddenSourceHeader
NORMDEF 	= norminette -R CheckDefine
CREALIB		= ar -crs
GENILIB		= ranlib
RM			= rm -f
RM_DIR		= rm -Rf

SRCS_PATH	= ./src/
INC_PATH	= ./includes/
OBJS_PATH	= ./objs/
NAME		= libft.a
INSRC		= $(wildcard $(INC_PATH)*.h)
SRCS		= $(wildcard $(SRCS_PATH)*.c)
OBJS		= $(patsubst $(SRCS_PATH)%.c, $(OBJS_PATH)%.o, $(SRCS))

all:		$(NAME)

$(OBJS_PATH):
			@mkdir $(OBJS_PATH)

$(OBJS_PATH)%.o: $(SRCS_PATH)%.c
		@$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_PATH)

$(NAME):	$(OBJS_PATH) $(OBJS)
		@$(CREALIB) $(NAME) $(OBJS)
		@$(GENILIB) $(NAME)

snorm:
		$(NORMFSH) $(SRCS)
		$(NORMDEF) $(INSRC)
	
clean:
		@$(RM_DIR) $(OBJS_PATH)
	
fclean:		clean
		@$(RM) $(NAME)

re:			fclean all

.PHONY:		all snorm clean fclean re
