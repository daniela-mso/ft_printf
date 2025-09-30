NAME=libftprintf.a

OBJS=

all: $(NAME)

%.o: %.c
    gcc -Wall -Wextra -Werror

$(NAME): $(OBJS)
    ar r libftprintf.a $(OBJS)

clean:
    -rm *.o 
    -rm *.a

fclean:
    -rm -f *.o 
    -rm -f *.a 

re: clean all 

