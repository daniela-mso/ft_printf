#include "ft_printf.h"


int	ft_string(char *s)
{
	int	count;

	if (s == NULL)
		s = "(null)";
	count = 0;
	while (s[count] != '\0')
		count++;
	write(1, s, count);
	return (count);
}