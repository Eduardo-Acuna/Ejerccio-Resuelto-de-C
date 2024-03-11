/*
Thor Ragnarok

Thor fue herido en una batalla contra Loki y su ejército. Durante dicha
batalla, Loki aprovecho la situación y usó su magia para aniquilar los
poderes mágicos del martillo de Thor, separándolo de su alma: la luz del
poder.

La batalla final del Ragnarok está muy cerca y Thor, que ahora se siente
muy débil, debe encontrar y alcanzar la luz del poder, lo más rápido
posible, ya que es lo único que puede restaurar sus poderes y los de
Mjollnir .

Odin preocupado por la situación de su hijo, pide ayuda a los alumnos de
LP1 de la FPUNA para que hagan un algoritmo capaz de ayudar a Thor a
encontrar la luz del poder para que de esa forma esté preparado para
enfrentarse al Ragnarok.

Thor se encuentra en un mapa cuyas coordenadas están denotadas por (X,
Y). Partiendo de las coordenadas iniciales se debe llegar a las coordenadas
finales en donde se encuentra la luz.

Cada movimiento hace que Thor se desplace 1 casilla en la dirección
elegida. Cada vez que se realiza un movimiento se debe de especificar la
dirección hacia donde se mueve:
N: norte
NE: noreste
NW: noroeste
S: sur
SE: sureste
SW: suroeste
W: oeste.
E: este.
Thor debe de llegar a su destino con la menor cantidad de movimientos.

Entradas que debe de recibir el programa:

En la primera línea las coordenadas iniciales en donde se encuentra Thor
(Xi Yi).
En la segunda línea las coordenadas de la luz a la cual debe de llegar Thor
(Xf Yf).
Salida generada por el programa:
Las direcciones por donde pasó Thor. Las direcciones deben de imprimirse
totalmente en mayúsculas dando un salto de línea uno después del otro.

EJEMPLOS:
Entrada:
2 10
10 13
Salida:
SURESTE
SURESTE
SURESTE
SUR
SUR
SUR
SUR
SUR
*/
#include <stdio.h>

int main() {

    int Ax, Ay, Bx, By, Cx, Cy;

    scanf("%d", &Ax);
    scanf("%d", &Ay);
    scanf("%d", &Bx);
    scanf("%d", &By);

    Cx = Bx - Ax;
    Cy = By - Ay;

    while( Ax!=Bx || Ay!=By ){
        if( Cx>0 ){
            printf("SUR");
            Cx--;
            Ax++;
        }else if( Cx<0 ){
            printf("NORTE");
            Cx++;
            Ax--;
        }


        if (Cy > 0) {
            printf("ESTE");
            Cy--;
            Ay++;
        }else if(Cy < 0) {
            printf("OESTE");
            Cy++;
            Ay--;
        }
        printf("\n");
    }

    return 0;
}



