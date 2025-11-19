#include "ft_printf.h"
#include <stdio.h>



int	ft_int(int nbr)
{
	int	count;
	long	n;

	count = ft_len_count(nbr);
	n = (long)nbr;
	if (n < 0)
	{
		ft_char('-');
		n *= -1;
	}
	if (n > 9)
	{
		ft_int(n / 10);
		ft_int(n % 10);
	}
	else
		ft_char(n + '0');
	return (count);
}



 
 