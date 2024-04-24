# include <stdio.h>
# include <time.h>

void cargar_vector(int vector[], int n);
void imprimir(int vector[], int n);
void permutacion(int vector[], int inicio, int fin);
void intercambiar(int *a,int *b);


int main(){
    int n;

    printf("\nIngrese el tamaño del vector: ");
    scanf("%d",&n);

    int vector[n];

    cargar_vector(vector,n);
    printf("\nVECETOR: ");
    imprimir(vector,n);

    printf("\nPERMUTACION DEL VECTOR:\n");

    permutacion(vector,0,n-1);


    return 0;
}

void intercambiar(int *a,int *b){
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

void permutacion(int vector[], int inicio, int fin){
    int i;


    if( inicio == fin ){
        for( i=0 ; i<=fin ; i++ ){
            printf("%d",vector[i]);
        }
        printf("\n");
    } else {
        for( i=inicio ; i<=fin ; i++ ){
            intercambiar(&vector[inicio], &vector[i]);

            permutacion(vector,inicio+1,fin);

            intercambiar(&vector[inicio], &vector[i]);
        }
    }
}



void cargar_vector(int vector[],int n){
    int i;

    srand(time(NULL));
    for( i=0 ; i<n ;  i++ ){
        vector[i] = 1+rand()%9;
    }
}

void imprimir(int vector[],int n){
    int i;

    for( i=0 ; i<n ;  i++ ){
        printf(" %d ",vector[i]);
    }
}
