# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/03 20:39:21 by omaali            #+#    #+#              #
#    Updated: 2023/10/03 20:39:21 by omaali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libft.a

LIBC = 	ft_bzero.c   \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_memchr.c  \
		ft_isprint.c  \
		ft_memset.c  \
		ft_strchr.c  \
		ft_strlen.c  \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_memset.c \
		ft_isdigit.c 
		

SRCS = 		${LIBC}

OBJS = 		${SRCS:.c=.o}

FLAGS = 	-Wall -Werror -Wextra

%.o:%.c		Makefile libft.h 
			gcc $(CFLAGS) -I ./ -c $< -o $@

$(NAME):	${OBJS}
			ar rc ${NAME} ${OBJS}

all: 		${NAME}

clean:
			rm -f ${OBJSALL}

fclean:	clean;
			rm -f ${NAME}

re:	fclean all
