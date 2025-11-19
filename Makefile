NAME = libftprintf.a

CFLAGS = cc -Wall -Werror -Wextra

SRC = ft_printf.c ft_char.c ft_string.c ft_int.c ft_unsigned.c ft_adress.c ft_hexa.c ft_len.c

OBJS = $(SRC:.c=.o)

all: $(NAME)

%.o: %.c
	$(CFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	ar r $@ $(OBJS)

run: $(NAME) main.c
	 $(CFLAGS) main.c -L. -lftprintf
	./a.out

clean:
	-rm -f *.o 

fclean:
	-rm -f *.o 
	-rm -f *.a 

re: clean all 

