/*El elefante
Un elefante decidió visitar a su amigo. Resulta que la casa del elefante se
encuentra en el punto 0 y la casa de su amigo en el punto x(x > 0) de la
línea de coordenadas. En un paso el elefante puede avanzar 1, 2, 3, 4 ó 5
posiciones. Determina cuál es el número mínimo de pasos que debe dar
para llegar a la casa de su amigo.

Entrada
La primera línea de la entrada contiene un entero x (1 ≤ x ≤ 1 000 000) - La
coordenada de la casa del amigo.

Salida
Imprime el número mínimo de pasos que debe dar el elefante para llegar
del punto 0 al punto x.

Ejemplos
Entrada
5
Salida
1
Entrada
12
Salida
3
*/

#include <stdio.h>

int main() {
    int x, p;
    scanf("%d", &x);

    p = (x + 4) / 5;

    printf("%d\n", p);

    return 0;
}
