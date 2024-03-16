/*
EL EQUIPO 2024-1
Un día tres amigos, Arturo, Kevin y Jose decidieron formar un equipo y
participar en un concurso de programación. A los participantes, generalmente,
se les ofrecen varios problemas durante dicho concurso. Mucho antes del inicio,
los amigos decidieron resolver un problema sólo si al menos dos de ellos están
seguros de la solución. De lo contrario, no escribirán la solución del problema.
Éste concurso ofrece n problemas a los participantes. Para cada problema
sabemos qué amigo está seguro de la solución. Ayude a los amigos a encontrar
la cantidad de problemas para los que escribirán una solución.

Entrada:
La primera línea contiene un entero, n (la cantidad de problemas del concurso).
Cada una de las n líneas siguientes contienen tres enteros (0 ó 1). Si el primer
número de la línea es igual a 1, entonces Arturo está seguro de la solución del
problema, de lo contrario no está seguro. El segundo número muestra la visión
de Kevin sobre la solución, el tercer número muestra la vista de Jose. Los
números en las líneas están separados por espacios.
Salida:
Imprima un entero: la cantidad de problemas que los amigos resolverán en el
concurso.

EJEMPLOS:
Entrada:
3
1 1 0
1 1 1
1 0 0
Salida:
2
Entrada:
2
1 0 0
0 1 1
Salida:
1

En el primer ejemplo, los amigos reciben 3 problemas. Para el primero de ellos,
Arturo y Kevin están seguros de que saben cómo resolver el problema y los tres
saben cómo resolver el segundo problema. Eso significa que escribirán
soluciones para estos problemas. Sin embargo, sólo Jose está seguro de cómo
resolver el tercer problema, pero eso no es suficiente, por lo que los amigos no
escribirán la solución para ese problema.
*/


# include <stdio.h>

int main(){
    int n, i, arturo, kevin, jose, resp;

    scanf("%d",&n);

    for( i=0 ; i<n ; i++ ){
        scanf("%d",&arturo);
        scanf("%d",&kevin);
        scanf("%d",&jose);

        if( arturo + kevin + jose >= 2 ){
            resp++;
        }
    }

    printf("%d",resp);

    return 0;
}
