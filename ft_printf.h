#ifndef LIBFTPRINTF_H
#define LIBFTPRINTF_H

//#include "../libft/libft.h"
#include <unistd.h> // write 
#include <stdarg.h> // variadic lists
#include <inttypes.h> // uintptr_t


int	ft_printf(const char *format, ...);
int	ft_char(char c);
int	ft_string(char *s);
int	ft_int(int nbr);


#endif 