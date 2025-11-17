#include "ft_printf.h"


int	ft_string(char *s)
{
	int	count;

	count = 0;
	while (s[count] != '\0')
		count++;
	write(1, s, count);
	return (count);
}