#include "ft_printf.h"
#include <stdio.h> 

int main()
{
    int count;
    ft_printf("helloooo my name is Daniela :3\n\n");

    count = ft_printf("ft_printf: |%%|");
    ft_printf("		count: |%d|\n", count);

    count = printf("___printf: |%%|");
    printf("		count: |%d|\n", count);

    ft_printf("\n");

    count = ft_printf("ft_printf: |A B C %c|", 'D');
    ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |A B C %c|", 'D');
    printf("		count: |%d|\n", count);


    ft_printf("\n");

    count = ft_printf("ft_printf: |Good Morning %s%s|", "Mista", " Pepe Onzima");
    ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |Good Morning %s%s|", "Mista", " Pepe Onzima");
    printf("		count: |%d|\n", count);


    ft_printf("\n");

    // count = ft_printf("ft_printf: |%d, %d, %i, %i|", 1, -20000, 2147483647, -2147483648);
    // ft_printf("		count: |%d|\n", count);
    // count = printf("___printf: |%d, %d, %i, %i|", 1, -20000, 2147483647, -2147483647);
    // printf("		count: |%d|\n", count);
  
    // ft_printf("\n");


    // count = ft_printf("ft_printf: %d", 10); // gives me an error on the count cant understand why
    // ft_printf("		count: |%d|\n", count);
    // count = printf("___printf: %d", 1); // gives an error for the min so i change the last digit for 7
    // printf("		count: |%d|\n", count);
  
    ft_printf("\n");

   // count = ft_printf("ft_printf: |%u|", "Mista", " Pepe Onzima");
   // ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |%u|", -199990);
    printf("		count: |%d|\n", count);
    



    return 0;
}