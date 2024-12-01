# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jodougla <jodougla@42angouleme.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/21 17:19:18 by jodougla          #+#    #+#              #
#    Updated: 2024/12/01 16:55:38 by jodougla         ###   ########.fr        #
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

SRCS 		:=	ctypes.h/ft_isalpha.c\
				ctypes.h/ft_isdigit.c\
				ctypes.h/ft_isalnum.c\
				ctypes.h/ft_isascii.c\
				ctypes.h/ft_isprint.c\
				string.h/ft_strlen.c\
				string.h/ft_memset.c\
				string.h/ft_bzero.c\
				string.h/ft_memcpy.c\
				string.h/ft_memmove.c\
				string.h/ft_strlcpy.c\
				string.h/ft_strlcat.c\
				ctypes.h/ft_toupper.c\
				ctypes.h/ft_tolower.c\
				string.h/ft_strchr.c\
				string.h/ft_strrchr.c\
				string.h/ft_strncmp.c\
				string.h/ft_memchr.c\
				string.h/ft_memcmp.c\
				string.h/ft_strnstr.c\
				stdlib/ft_atoi.c\
				stdlib/ft_calloc.c\
				stdlib/ft_strdup.c\
				str/ft_substr.c\
				str/ft_strjoin.c\
				str/ft_split.c\
				str/ft_strtrim.c\
				str/ft_striteri.c\
				type_fd/ft_putchar_fd.c\
				type_fd/ft_putstr_fd.c\
				type_fd/ft_putendl_fd.c\
				type_fd/ft_putnbr_fd.c\
				str/ft_strmapi.c\
				str/ft_itoa.c\
				lst/ft_lstnew.c\
				lst/ft_lstadd_front.c\
				lst/ft_lstlast.c\
				lst/ft_lstsize.c\
				lst/ft_lstadd_back.c\
				lst/ft_lstdelone.c\
				lst/ft_lstclear.c\
				lst/ft_lstiter.c\
				lst/ft_lstmap.c\
				alloc/alloc_manager.c \

SRCS			:= $(addprefix $(DIR_SRCS)/, $(SRCS))
OBJS 			:= $(addprefix $(DIR_OBJS)/, $(SRCS:%.c=%.o))



RM			:=rm -rf
DIR_DUP		:=mkdir -p $(@D)

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
	 ar -rc $(NAME) $(OBJS)

$(DIR_OBJS)/%.o : %.c
	mkdir -p $(@D)
	echo "create .o"
	$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@ 

clean :
	$(RM) $(DIR_OBJS)
	echo "${RED} .objs folder remove${NC}\n"

fclean : clean
	rm -f $(NAME)
	echo "${RED}$(NAME) removed${NC}\n"

re : fclean all


.PHONY : all clean fclean re
