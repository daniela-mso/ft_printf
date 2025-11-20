#include "ft_printf.h"
#include <stdio.h>



void	ft_putnbr(unsigned long long int nbr)
{
	if (nbr < 0)
	{
		ft_char('-');
		nbr *= -1;
	}
	if (nbr > 9)
	{
		ft_int(nbr / 10);
		ft_int(nbr % 10);
	}
	else
		ft_char(nbr + '0');
}

int	ft_int(int nbr)
{
	int	count;
	long	n;

	count = ft_len_count(nbr);
	n = (long)nbr;

	return (count);
}



 
 