
#include <stdio.h>
#define n 25

int main ()
{
    int cont1;
    int cont2;
	
    for (cont1 = 1 ; cont1 <= n; cont1 = cont1 + 1)
    {
    	for (cont2 = 1; cont2 < cont1; cont2 = cont2 + 1)
        {
            printf("-");
        }
        for (cont2 = 1; cont2 <= n; cont2 = cont2 + 1)
        {
            printf("*");
        }
        for (cont2 = 1; cont2 <= (n - cont1); cont2 = cont2 + 1)
        {
            printf("-");
        }
        printf("\n");
    }
	return 0;
}


