#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20
//#define M 11   \\impar
#define C 1000

int f1 (int M);

int main()
{
    int i;

    for (i = 3; i <= 21; i = i +2)
    {
        printf("M = %d\n", i);
        f1(i);
    }
}

int f1 (int M)
{
    int p, cont, i, aprox,k;
    float probsi, probno;

    srand (time(NULL));

    cont = 0;

    p = M / 2 + 1;

    for ( k = 0; k < C; k++)
    {
        for ( i = 0; i < N; i++ )
        {
            aprox  = 1 + rand() % 100;

            if (aprox <= 50)
            {
                p = p;
            }
            if (aprox <= 75 && aprox >50)
            {
                p = p - 1;
            }
             if (aprox > 75 && aprox <= 100)
            {
                p = p + 1;
            }

            if (p <= M & p > 0)
            {
                cont = cont +1;
                break;
            }
        }
    }

    printf("cont = %d\n",cont);


    probsi = cont*1.0/C;
    probno = 1 - probsi;

    printf("Prob. de llegar %.2f\n", probsi * 100);
    printf("Prob. de no llegar %.2f\n", probno * 100);

    printf("\n");
}
