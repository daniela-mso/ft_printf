#include "ft_printf.h"

int	ft_hexa(unsigned int nbr, char format)
{
	int	count;
	format = 'c';
	count = ft_hexa_len_count(nbr);
	ft_hexa_putnbr(nbr);
	return (count);
}