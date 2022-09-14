# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jpires-p <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/31 18:31:23 by jpires-p          #+#    #+#              #
#    Updated: 2022/05/13 01:43:45 by jpires-p         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC					= gcc
CFLAGS				= -Wall -Wextra -Werror
NORMFSH				= norminette -R CheckForbiddenSourceHeader
NORMDEF 			= norminette -R CheckDefine
CREA_STC_LIB		= ar -crs
GEN_INDEX_LIB		= ranlib
RM_DIR				= rm -Rf
RM					= rm -f

FTPF_PATH			= ./
LIB_PATH			= $(FTPF_PATH)Includes/
SRC_PATH			= $(FTPF_PATH)Srcs/
OBJS_PATH			= $(FTPF_PATH)obj/
LIBFT_PATH			= $(LIB_PATH)libft/

LIBFT_SRCS			= $(wildcard $(LIBFT_PATH)src/*.c)
LIBFT_OBJS			= $(patsubst $(LIBFT_PATH)src/%.c, $(LIBFT_PATH)objs/%.o, $(LIBFT_SRCS))
LIBFT_SLIB			= libft.a
NAME				= libftprintf.a
FTPF_HEADER			= ft_printf.h
FTPF_SRCS			= $(wildcard $(SRC_PATH)*.c)
FTPF_OBJS			= $(patsubst $(SRC_PATH)%.c, $(OBJS_PATH)%.o, $(FTPF_SRCS))


all:		$(NAME)

$(LIBFT_PATH)$(LIBFT_SLIB):	
		@$(MAKE) -C $(LIBFT_PATH)

$(OBJS_PATH):
		@mkdir $(OBJS_PATH)

$(OBJS_PATH)%.o: $(SRC_PATH)%.c
		@$(CC) $(CFLAGS) -c $< -o $@ -I$(LIB_PATH)

$(NAME):	$(OBJS_PATH) $(LIBFT_PATH)$(LIBFT_SLIB) $(LIBFT_OBJS) $(FTPF_OBJS)
		@$(CREA_STC_LIB) $(NAME) $(LIBFT_OBJS) $(FTPF_OBJS)
		@$(GEN_INDEX_LIB) $(NAME)		

snorm:
		$(NORMFSH) $(FTPF_SRCS)
		$(NORMDEF) $(LIB_PATH)$(FTPF_HEADER)

clean:
		@$(RM_DIR) $(OBJS_PATH)

cleanlib:
		@$(MAKE) -C $(LIBFT_PATH) fclean
	
fclean:		clean cleanlib
		@$(RM) $(NAME)

re:			fclean all

.PHONY:		all snorm clean cleanlib fclean re
