/*
En Japón, el número 4 se interpreta como la muerte.
La secuencia viva "a" contiene todos los números naturales que no contienen el dígito 4. a=[1,2,3,5,6,7,8,9,10,11,12,13,15,16,...].

Por ejemplo,
el número 1235 forma parte de la secuencia "a", pero los números 4321 y 443 no forman parte de la secuencia "a".
Se te solicita construir un programa para buscar rápidamente un número en una posición específica "k" en la secuencia.

Por ejemplo,
si se quiere encontrar el número en la posición k=4(partiendo del indice 1) la respuesta sería a[k]=5.

Entrada:
La primera línea de los datos de entrada contiene un solo número entero "n" (1≤n≤100) — el número de casos de prueba.
En la única línea de cada caso de prueba, hay un solo número entero "k" (1≤k≤100000) — que sería la posición dentro de la secuencia.

Salida:
Para cada caso de prueba, imprime en una línea separada el número a[k] indexado desde 1.

EJEMPLO
Entrada
6
3
5
22
10
100
12345

Salida
3
6
25
11
121
18937
*/

# include <stdio.h>

void posicion(int k);
int es_lindo(int num);

int main(){
    int i ,n ,k;

    scanf("%d",&n);
    if( n<1 || n>100){
        return 0;
    }

    int vector[n];
    for( i=0 ; i<n ; i++ ){
        scanf("%d",&vector[i]);
        if( vector[i]<1 || vector[i]>100000){
            return 0;
        }
    }

    for(i=0 ; i<n ; i++ ){
        posicion(vector[i]);
    }

    return 0;
}


void posicion(int k){
    int i,pos;
    pos=0;
    for( i=1 ; i<1000000 ; i++){
        if(es_lindo(i)==1){
            pos=pos+1;
            if(pos==k){
                printf("el numero en la posicion %d es: %d \n",k,i);
            }
        }
    }
}

int es_lindo(int num){
    
    while (num > 0){
        if (num % 10 == 4){
            return 0;
        }
        num = num / 10;
    }
    return 1;
}








