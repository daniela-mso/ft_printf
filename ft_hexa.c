#include "ft_printf.h"

int	ft_hexa(unsigned int nbr)
{
	int	count;

	count = ft_hexa_len_count(nbr);
	ft_hexa_putnbr(nbr);
	return (count);
}