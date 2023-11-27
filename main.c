#include "ft_printf.h"
#include <stdio.h>
int main()
{
    int a = ft_printf("mine => ali%");
    printf("\n");
    int b = printf("syse => ali%");
    printf("\n");

    printf("mine => %d \nsys => %d \n", a , b);
    ft_printf("%i\n", ft_printf("%s   ", NULL));
    ft_printf("%i\n", ft_printf("%s   ", NULL));

    ft_printf("%i\n", ft_printf("%i   ", 657));
    ft_printf("%i\n", ft_printf("%i   ", 657));

    ft_printf("%i\n", ft_printf("%d   ", -990));
    ft_printf("%i\n", ft_printf("%d   ", -990));

    ft_printf("%i\n", ft_printf("%u   ", 1234));
    ft_printf("%i\n", ft_printf("%u   ", 1234));

    ft_printf("%i\n", ft_printf("%%   "));
    ft_printf("%i\n", ft_printf("%%   "));
    int *s;
    printf("%i\n", printf("%p  ", s));
    ft_printf("%i\n", ft_printf("%p  ", s));

    ft_printf("%i\n", ft_printf("%X   ", 89));
    ft_printf("%i\n", ft_printf("%X   ", 89));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -1));
    printf("%i\n", printf("%x ", -1));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -9));
    printf("%i\n", printf("%x ", -9));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -10));
    printf("%i\n", printf("%x ", -10));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -11));
    printf("%i\n", printf("%x ", -11));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -14));
    printf("%i\n", printf("%x ", -14));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -15));
    printf("%i\n", printf("%x ", -15));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -16));
    printf("%i\n", printf("%x ", -16));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -99));
    printf("%i\n", printf("%x ", -99));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", -100));
    printf("%i\n", printf("%x ", -100));
    ft_printf("----------------------------------\n");
    char *o = "hello";

    ft_printf("%i\n", ft_printf("ali%"));
    printf("%i\n", printf("ali%"));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%s ", "hello world"));
    printf("%i\n", printf("%s ", "hello world"));
    ft_printf("----------------------------------\n");
    ft_printf("%i\n", ft_printf("%i ", 657));
    printf("%i\n", printf("%i ", 657));
    ft_printf("-----------------------------------\n");
    ft_printf("%i\n", ft_printf("%d ", -990));
    printf("%i\n", printf("%d ", -990));
    ft_printf("-----------------------------------\n");
    ft_printf("%i\n", ft_printf("%u ", 1234));
    printf("%i\n", printf("%u ", 1234));
    ft_printf("-----------------------------------\n");
    ft_printf("%i\n", ft_printf("%% "));
    printf("%i\n", printf("%% "));
    ft_printf("-----------------------------------\n");
    ft_printf("%i\n", ft_printf("%x ", 89));
    printf("%i\n", printf("%x ", 89));
    ft_printf("-----------------------------------\n");
    ft_printf("%i\n", ft_printf("%X ", 89));
    printf("%i\n", printf("%X ", 89));
    ft_printf("-----------------------------------\n");
    printf("%i\n", printf("%p ", o));
    ft_printf("%i\n", ft_printf("%p ", o));
    char u[] = "ali";
    ft_printf("   %d\n", ft_printf("hello my name is %s first charcter in may name is %c my age is %d in hexa is %x or %X the insigned of -12 is %u and the address of my name is %p and %%", u, 'a', 19, -19, -19, -12, u));
    printf("   %d\n", printf("hello my name is %s first charcter in may name is %c my age is %d in hexa is %x or %X the insigned of -12 is %u and the address of my name is %p and %%", u, 'a', 19, -19, -19, -12, u));

}

/* int main() {
    int *p;
    // Write C code here
    printf("%d\n", printf("%p ", NULL));
    ft_printf("%d\n", ft_printf("%p ", NULL));
    return 0;
} */
