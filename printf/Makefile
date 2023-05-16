SOURCEFILES	= 	ft_printf.c \
ft_hex.c \
ft_putchar.c \
ft_putnbr.c \
ft_putstr.c \
ft_unsgdint.c \
ft_putp.c

OBJECTS	= $(SOURCEFILES:.c=.o)

NAME	= libftprintf.a

COMPILER		= cc

RM		= rm -f
FLAGS	= -Wall -Wextra -Werror

.PHONY: all, clean, fclean, re

all: $(NAME) 

${NAME} : ${OBJECTS}
	ar -rcs $(NAME) $(OBJECTS)


%.o : %.c
	${COMPILER} ${FLAGS} -c $< -o $@

clean:
	${RM} ${OBJECTS} 

fclean: clean
	${RM} ${NAME}

re: fclean all