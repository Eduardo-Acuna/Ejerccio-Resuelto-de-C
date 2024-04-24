# include <string.h>
# include <stdio.h>

int buscar_letra(char *vector,char letra_bus);

int main(){
    char vector[] = "abcdefghijklmnopqrstuvwxyz";
    char letra_bus;


    int a,i;
    a = strlen(vector);
    for( i=0 ; i<a ; i++ ){
        printf(" %c ",vector[i]);
    }
    printf("\nIngrese la letra a buscar: ");
    scanf("%c",&letra_bus);

    int indice;

    indice = buscar_letra(vector, letra_bus);

    if( indice==-1){
        printf("\nNO EXITE ESA LETRA");
    }else{
        printf("\nLa letra %c esta en el indice: %d",letra_bus,indice+1);
    }

    return 0;
}

int buscar_letra(char *vector,char letra_bus){
    int inicio, fin, medio;

    inicio = 0;
    fin = strlen(vector) - 1;

        while( inicio <= fin ){
        medio = inicio + (fin - inicio)/2;

        if( vector[medio] == letra_bus ){
            return medio;
        } else if( vector[medio] < letra_bus ){
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1;

}
