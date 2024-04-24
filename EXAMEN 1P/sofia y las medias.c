/*
Sofía y las Medias
Sofía tiene N pares de medias. Por la mañana, Sofía debe ponerse un par de medias antes de
ir a la escuela. Cuando llega a casa por la noche, Sofía se quita las medias usadas y las tira a la
basura. Cada M-ésimo día, su madre compra un par de medias nuevas para Sofía. Lo hace muy
tarde en la noche, por lo que Sofía no puede ponerse un par de calcetines nuevos antes del día
siguiente. ¿Cuántos días consecutivos pasan hasta que Sofía se queda sin medias?.
Entrada:
Dos enteros, N y M, separados por un espacio.
Salida:
Un entero único, la respuesta al problema.
EJEMPLOS:
Entrada:
2 2
Salida:
3
Entrada:
9 3
Salida:
13
*/




# include <stdio.h>

int main(){
    int n,m;

    scanf("%d",&n);
    scanf("%d",&m);



    int dias,cont,control=1;
    cont =0;
    dias = 0;
    do{
        dias++;

        if(dias==m){
            dias=0;
            n=n+1;
        }
        cont++;
        n=n-1;

        if(n==0){
            control=0;
        }
    } while(control);

    printf("%d",cont);

    return 0;
}
