/*KEVIN Y LOS NÚMEROS LINDOS 2024-1
Kevin ama cuando los números son lindos. Y él sabe que un número es lindo si
el mismo es entero positivo cuya representación decimal contiene sólo los
dígitos 4 y 7. Por ejemplo 77, 44, 744 son números lindos, pero 5, 17 y 467 no lo
son.
Desafortunadamente, no todos los números son totalmente lindos, Kevin llama
a un número totalmente lindo solo si el número de dígitos lindos es un numero
lindo en si (4 y 7). Escriba un algoritmo para determinar si un número n
es lindo o totalmente lindos para Kevin o no.

Entrada:
Una única línea que contiene un número entero n (0 < n <231)
Salida:
Imprimir "SI" si el número es lindo o totalmente lindo para Kevin y "NO" en
caso contrario.

Ejemplos:
Entrada:
40047
Salida
NO
Entrada
7747774
Salida
SI*/
# include <stdio.h>

int es_lindo( int n);
int es_totalmente_lindo(int n);

int main(){
    int n ,nro_lindo, total_lindo;
    scanf("%d",&n);
    if( n<0 || n>2147483648){
        return 0;
    }

    nro_lindo = es_lindo(n);
    total_lindo = es_totalmente_lindo(n);

    if( nro_lindo || total_lindo ){
        printf("SI\n");
    } else {
        printf("NO\n");
    }

    return 0;
}


int es_lindo( int n){
    int dig;
    while(n>0){
        dig = n % 10;
        if( dig!=4 && dig!=7 ){
            return 0; //no es lindo
        }
        n=n/10;
    }
    return 1;// si es lindo
}


int es_totalmente_lindo(int n){
    int nro_lindo, cont, dig;
    cont = 0;
    while(n>0){
        dig = n % 10;
        if( dig==4 || dig==7){
           cont++;
        }
        n /= 10;
    }
    nro_lindo = es_lindo(cont);
    return nro_lindo;
}
