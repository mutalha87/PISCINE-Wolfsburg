# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mutalha <mutalha@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/07 14:46:08 by mutalha           #+#    #+#              #
#    Updated: 2024/10/09 16:58:49 by mutalha          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= rush-02

GCC			= gcc

CFLAGS		= -Wall -Wextra -Werror

SOURCES		= atoi.c ft_chunking.c ft_numd.c ft_putstr.c ft_putstrn.c ft_read_file.c ft_strlen.c ft_strstr.c ft_trim.c main.c

OBJS		= ${SOURCES:.c=.o}

HEAD 		= ./includes

RM			= rm -f

# Default rule to build the executable
all:		${NAME} post-build

.c.o:
			${GCC} ${CFLAGS} -c -I ${HEAD} $< -o ${<:.c=.o}

# Rule to link object files into the executable
${NAME}:	${OBJS}
			${GCC} ${CFLAGS} -o ${NAME} ${OBJS}

# Rule for post-build actions (i.e., cleaning object files)
post-build: clean-objects

# Clean only object files after build
clean-objects:
			${RM} ${OBJS}

# # Manual clean for object files
# clean:
# 			${RM} ${OBJS}

# # Full clean including the executable
# fclean:		clean
# 			${RM} ${NAME}

# Rebuild everything from scratch
re:			fclean all

# Declare these as phony targets to avoid conflicts with files named like the targets
.PHONY:		all clean clean-objects fclean re post-build
