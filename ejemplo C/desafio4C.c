
#include <stdio.h>
#define n 7

int main ()
{
    int cont1;
    int cont2;
    int cont3;

    for (cont1 = 1 ; cont1 <= n; cont1 = cont1 + 1)
    {
    	if (cont1 <= (n/2)+1 )
    	{
	    	for (cont2 = 1; cont2 < ((n) - (cont1 + 2)); cont2 = cont2 + 1)
	        {
	            printf("-");
	        }
	        for (cont2 =  - 1; cont2 <= cont1 + 2; cont2 = cont2 + 1)
	        {
	            printf("o");
	        }
	        for (cont2 = 1; cont2 <= ((n/2+1) - cont1); cont2 = cont2 + 1)
	        {
	            printf(" ");
	        }
	        printf("\n");
		}
		else
		{
			for (cont2 = 1; cont2 <= (n - cont1); cont2 = cont2 + 1)
	        {
	            printf(" ");
	        }
	        for (cont2 = 1; cont2 <= (n/2+1); cont2 = cont2 + 1)
	        {
	            printf("o");
	        }
	        for (cont2 = 1; cont2 <= (cont1 - (n/2+1)); cont2 = cont2 + 1)
	        {
	            printf(" ");
	        }
	        printf("\n");
		}
    }
	return 0;
}

