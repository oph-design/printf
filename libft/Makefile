# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oheinzel <oheinzel@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/14 15:57:16 by oheinzel          #+#    #+#              #
#    Updated: 2022/11/04 15:37:58 by oheinzel         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC_FILES = 	ft_memset		\
				ft_bzero		\
				ft_memcpy		\
				ft_memcpy		\
				ft_memmove 		\
				ft_memchr		\
				ft_memcmp		\
				ft_strlen		\
				ft_isalpha 		\
				ft_isdigit		\
				ft_isalnum		\
				ft_isascii		\
				ft_isprint		\
				ft_toupper		\
				ft_tolower		\
				ft_strchr		\
				ft_strrchr		\
				ft_strncmp		\
				ft_strlcpy		\
				ft_strlcat		\
				ft_strnstr		\
				ft_atoi			\
				ft_calloc		\
				ft_strdup		\
				ft_substr		\
				ft_strjoin	 	\
				ft_strtrim		\
				ft_split		\
				ft_itoa			\
				ft_strmapi		\
				ft_striteri		\
				ft_putchar_fd	\
				ft_putstr_fd	\
				ft_putendl_fd	\
				ft_putnbr_fd	\
				ft_lstnew		\
				ft_lstadd_front	\
				ft_lstsize		\
				ft_lstlast		\
				ft_lstadd_back	\
				ft_lstclear		\
				ft_lstdelone	\
				ft_lstiter		\
				ft_lstmap		\

#Standard

NAME		=	libft.a
INCLUDES	=	../include
SRCS_DIR 	=	src/
OBJS_DIR	=	obj/
CC			=	gcc
CFLAGS		=	-Wall -Werror -Wextra -I
RM			=	rm -f
AR			=	ar -rcs

#Sources

SRCS 		= 	$(addprefix $(SRCS_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJS 		= 	$(addprefix $(OBJS_DIR), $(addsuffix .o, $(SRC_FILES)))

###

OBJSF		=	.cache_exists

all:		$(NAME)

$(NAME):	$(OBJS)
			@$(AR) $(NAME) $(OBJS)
			@ranlib $(NAME)
			@echo "Libft compiled!"

$(OBJS_DIR)%.o : $(SRCS_DIR)%.c | $(OBJSF)
			@echo "Compiling: $<"
			@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJSF):
			@mkdir -p $(OBJS_DIR)

clean:
			@$(RM) -rf $(OBJS_DIR)
			@$(RM) -f $(OBJSF)
			@echo "libft objects files cleaned!"

fclean:		clean
			@$(RM) -f $(NAME)
			@echo "libft executable files cleaned!"

re:			fclean all
			@echo "Cleaned and rebuilt everything for libft!"

.PHONY:		all clean fclean re
