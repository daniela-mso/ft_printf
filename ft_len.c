#include "ft_printf.h"

int	ft_len_count(long nbr)
{
	int	count;

	count = 0;
	if (nbr == 0)
		count++;
	if (nbr < 0)
		count++;
	while (nbr != 0)
	{
		nbr /= 10;
		count++;
	}

	return (count); 
}

int	ft_hexa_len_count(unsigned long long int nbr)
{
	int	count;

	count = 0;
	while (nbr != 0)
	{
		nbr /= 16;
		count++;
	}
	return (count);
}