#include "ft_printf.h"
#include <stdio.h>
int	len_count(int nbr)
{
	static int	count;

	count = 0;
	if (nbr < 0)
		nbr *= -1;
	while (nbr > 9)
	{
		nbr /= 10;
		count++;
	}
	//printf("   count before  %d", count);
	count++;
	//printf("   count after %d", count);

	return (count); 
}

int	ft_int(int nbr)
{
	int	count;
	long	n;

	count = len_count(nbr);
	n = (long)nbr;
	if (n < 0)
	{
		ft_char('-');
		count++;
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
 