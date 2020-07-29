NAME = libft.a

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c \
	   srcs/ft_strlen.c srcs/ft_strcmp.c

OBJECTS = ${SRCS:.c=.o}

HEADER = includes

FLAGS = -Wall -Wextra -Werror

CC = gcc

all : ${NAME}

.c.o:
	${CC} ${FLAGS} -I ${HEADER} -c $< -o ${<:.c=.o}

${NAME} : ${OBJECTS}
	ar rc libft.a ${OBJECTS}
	ranlib libft.a

clean :
	/bin/rm -f ${OBJECTS}

fclean : clean
	/bin/rm -f ${NAME}

re :
	fclean all

.PHONY : clean all
