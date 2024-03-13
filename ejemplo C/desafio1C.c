
#include <stdio.h>
#define n 6

int main ()
{
    int cont = 1;
    int cont2;

    for (cont = 1 ; cont <= n; cont = cont + 1)
    {
        for (cont2 = 1; cont2 <= n; cont2 = cont2 + 1)
        {
            printf("*");
        }
        printf("\n");
    }
	return 0;
}
