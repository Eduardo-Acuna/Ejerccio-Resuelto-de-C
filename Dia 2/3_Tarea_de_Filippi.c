/*

TAREAS 2024-1
Filipi tiene que hacer n tareas hoy. La i-�sima tarea tarda 'a,i' unidades de tiempo para ser
completada. Est� garantizado que por toda 'i' pertenece [2,...,n] la condici�n 'a,i-1',
la secuencia est� ordenada.
Adem�s Filipi puede esforzarse m�s en algunas tareas. Puede elegir no m�s de
Cualquier 'k' tareas y hacerlas cada una en 'x' unidades de tiempo en vez de a,i
(x< m,in,(j<=i<=m) a,i)

Fipili es muy responsable por lo que debe hacer todas las 'n 'tareas, y ahora quiere saber
Cuanto es el tiemp0 m�nimo que necesita para hacerlas todas.

Entrada
La primera linea contiene tres enteros n, k, x(1<=k<=n<=100, 1<=x<=99) el
n�mero de tareas que debe realizar Filippi el n�mero de tareas que puede hacer en 'x' por
unidades de tiempo, y el numero 'x',
La segunda linea contiene 'n' n�meros enteros a,i (2<=a,i<=100), el tiempo que Filipi
tiene que dedicar a la i-�sima tarea.
Salida
imprima un n�mero - el tiempo minimo que Flippi necesita para hacer las 'n' tareas.
EJEMPLOS
Entrada:
4 2 2
3 6 7 10
Salida:
13
Entrada:
5 2 1
100 100 100 100 100
Salida:
302





*/






#include <stdio.h>

int main() {
    int n, k, x;
    scanf("%d %d %d", &n, &k, &x);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min_time = 0;
    for (int i = 0; i < n; i++) {
        if (i < n - k) {
            min_time += a[i];
        } else {
            min_time += x;
        }
    }

    printf("%d\n", min_time);

    return 0;
}
