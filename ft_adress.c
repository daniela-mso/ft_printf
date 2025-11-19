#include "ft_printf.h"


void	ft_hexa_putnbr(uintptr_t nbr)
{
	
	if (nbr > 15)
	{
		ft_hexa_putnbr(nbr / 16);
		ft_hexa_putnbr(nbr % 16);
	}
	else if (nbr > 9 && nbr < 16)
		ft_char( nbr - 10 + 'a');
	else
		ft_char(nbr + '0' );
}

int	ft_adress(uintptr_t ptr)
{
	int count;

	count = ft_hexa_len_count(ptr);
	ft_string("0x");
	count += 2;
	ft_hexa_putnbr(ptr);
	return (count);
}

