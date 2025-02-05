# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 17:19:18 by jodougla          #+#    #+#              #
#    Updated: 2025/02/05 11:25:29 by jodougla         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#####################################################################
#																	#
#		INGREDIENTS													#
#																	#
#####################################################################

NAME 		:= 	libft.a

CC 			:= 	cc
CFLAGS 		:= 	-Wall -Werror -Wextra
IFLAGS		:= -I ./headers

DIR_SRCS	:=	srcs
DIR_OBJS   	:=	.objs

SRCS 		:=	ctypes.h/ft_isalpha.c \
				ctypes.h/ft_isdigit.c \
				ctypes.h/ft_isalnum.c \
				ctypes.h/ft_isascii.c \
				ctypes.h/ft_isprint.c \
				ctypes.h/ft_issign.c \
				ctypes.h/ft_isspace.c \
				string.h/ft_strlen.c \
				string.h/ft_memset.c \
				string.h/ft_bzero.c \
				string.h/ft_memcpy.c \
				string.h/ft_memmove.c \
				string.h/ft_strlcpy.c \
				string.h/ft_strlcat.c \
				ctypes.h/ft_toupper.c \
				ctypes.h/ft_tolower.c \
				string.h/ft_strchr.c \
				string.h/ft_strrchr.c \
				string.h/ft_strncmp.c \
				string.h/ft_memchr.c \
				string.h/ft_memcmp.c \
				string.h/ft_strnstr.c \
				stdlib/ft_atoi.c \
				stdlib/ft_calloc.c \
				stdlib/ft_strdup.c \
				stdlib/ft_atof.c \
				str/ft_substr.c \
				str/ft_strjoin.c \
				str/ft_split.c \
				str/ft_strtrim.c \
				str/ft_striteri.c \
				type_fd/ft_putchar_fd.c \
				type_fd/ft_putstr_fd.c \
				type_fd/ft_putendl_fd.c \
				type_fd/ft_putnbr_fd.c \
				type_fd/close_fd.c \
				str/ft_strmapi.c \
				str/ft_itoa.c \
				lst/ft_lstnew.c \
				lst/ft_lstadd_front.c \
				lst/ft_lstlast.c \
				lst/ft_lstsize.c \
				lst/ft_lstadd_back.c \
				lst/ft_lstdelone.c \
				lst/ft_lstclear.c \
				lst/ft_lstiter.c \
				lst/ft_lstmap.c \
				alloc/alloc_manager.c \
				dlst/dlst_add_back.c \
				dlst/dlst_addfront.c \
				dlst/dlst_clear.c \
				dlst/dlst_last.c \
				dlst/dlst_len.c \
				dlst/dlst_new.c \
				printf/ft_printf.c \
				printf/ft_printf_str.c \
				printf/ft_putnbr.c \
				printf/ft_putnbr_hexa.c \
				printf/ft_putnbr.c \
				gnl/get_next_line_bonus.c \
				gnl/get_next_line_utils_bonus.c \
				free/ft_free.c \
				free/free_cleanup_char.c \

SRCS			:= $(addprefix $(DIR_SRCS)/, $(SRCS))
OBJS 			:= $(addprefix $(DIR_OBJS)/, $(SRCS:%.c=%.o))

RM				:= rm -rf
DIR_DUP			:= mkdir -p $(@D)
AR				:= ar -rc

#####################################################################
#																	#
#		COLORS														#
#																	#
#####################################################################

RED		:=\033[0;31m
GREEN	:=\033[0;32m
NC		:=\033[0m
PURPLE 	:=\033[0;35m

#####################################################################
#																	#
#			RULES													#
#																	#
#####################################################################

all : $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $(NAME) $(OBJS)

$(DIR_OBJS)/%.o : %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@ 

clean :
	@$(RM) $(DIR_OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all


.PHONY : all clean fclean re
