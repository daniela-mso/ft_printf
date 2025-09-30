#include <stdarg.h>
#include "libftprintf.h" 

int ft_printf(const char *f, ...)
{
    va_list ap;
    char *s;
    int d;

    va_start(ap, f);  /

    while (*f)
    {
        if (*f == '%' && *(f + 1) != '%')  
        {
            f++;  

            if (*f == 'd')  
            {
                d = va_arg(ap, int);  

                ft_putnbr_fd(d, 1);
            }
            else if (*f == 's') 
            {
                s = va_arg(ap, char *); 

                ft_putstr_fd(s, 1);
            }
            else if (*f == '%') 
            {
                ft_putchar_fd('%', 1); 
            }
        }
        f++;  
    }

    va_end(ap); 

}

