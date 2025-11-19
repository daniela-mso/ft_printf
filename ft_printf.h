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
int ft_len_count(long nbr);
int ft_unsigned(unsigned int nbr);
int ft_adress(uintptr_t ptr);
int	ft_hexa_len_count(unsigned long long int nbr);
void	ft_hexa_putnbr(uintptr_t nbr);
int ft_hexa(unsigned int);



#endif 