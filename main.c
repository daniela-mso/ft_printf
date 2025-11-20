#include "ft_printf.h"
#include <stdio.h> 

int main()
{
    int count;
    ft_printf("helloooo my name is Daniela :3\n\n");

    ft_printf("%%\n\n");

    count = ft_printf("ft_printf: |%%|");
    ft_printf("		count: |%d|\n", count);

    count = printf("___printf: |%%|");
    printf("		count: |%d|\n", count);

    ft_printf("\n");
    ft_printf("char\n\n");

    count = ft_printf("ft_printf: |A B C %c|", 'D');
    ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |A B C %c|", 'D');
    printf("		count: |%d|\n", count);


    ft_printf("\n");
    ft_printf("string\n\n");

    count = ft_printf("ft_printf: |Good Morning %s%s|", "Mista", " Pepe Onzima");
    ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |Good Morning %s%s|", "Mista", " Pepe Onzima");
    printf("		count: |%d|\n", count);


    ft_printf("\n");
    ft_printf("int\n\n");


    count = ft_printf("ft_printf: |%d, %d, %i, %i|", 1, -20000, 2147483647, -2147483648);
    ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |%d, %d, %i, %i|", 1, -20000, 2147483647, -2147483647);
    printf("		count: |%d|\n", count);
  
    ft_printf("\n");
    ft_printf("unsigned\n\n");


    count = ft_printf("ft_printf: |%u, %u, %u, %u|", 0, 1, 53647, 2000000000);
    ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |%u, %u, %u, %u|", 0, 1, 53647, 2000000000);
    printf("		count: |%d|\n", count);


    ft_printf("\n");
    ft_printf("adress\n\n");


    int myVariable = 104;
    int  *myPointer = &myVariable; // myPointer now holds the memory address of myVariable

    //printf("The address of myVariable is: %p\n", myPointer);
    
    count = ft_printf("ft_printf: |%p|", myPointer);
    printf("		count: |%d|\n", count);
    count = printf("___printf: |%p|", myPointer);
    printf("		count: |%d|\n", count);



    ft_printf("\n");
    ft_printf("hexa\n\n");



    count = ft_printf("ft_printf: |%x|", 1982498437);
    printf("		count: |%d|\n", count);
    count = printf("___printf: |%x|", 1982498437);
    printf("		count: |%d|\n", count);


    ft_printf("\n");
    ft_printf("mix\n\n");

    count = ft_printf("ft_printf: |%s, %c, %d, %%, %u, %p|", "hello", 'x', 23, 4333, myPointer);
    ft_printf("		count: |%d|\n", count);
    count = printf("___printf: |%s, %c, %d, %%, %u, %p|", "hello", 'x', 23, 4333, myPointer);
    printf("		count: |%d|\n", count);



    printf(" %p %p\n", (void*)0, (void*)0);
    ft_printf(" %p %p\n", (void*)0, (void*)0);



    return 0;
}