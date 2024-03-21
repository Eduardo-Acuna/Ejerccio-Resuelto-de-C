# include <stdio.h>
# define M 12
# define CLAVE -1

int m,n;
char conj[M] = {'a','b','c','d','e','f','g','h','i','j','k','l'};
int c[M] = {0,1,2,3,4,5,6,7,8,9,10};
int v[M];

void variaciones( int p, int c[]);
void escribir( int V[]);

int main(){

    do{
        printf("\n m = "); scanf("%d",&m);
        printf(" n = "); scanf("%d",&n);
    } while((m>M) || (n>m) );

    printf("\n \tVariaciones (%d,%d)\n",m,n);

    variaciones(1,c);

    return 0;
}


void variaciones( int p, int c[]){
    int i;

    for( i=1 ; i<=m ; i++ ){
        if( c[i-1]==i-1){

            v[p-1]=i-1;

            if( p<n ){
                c[i-1] = CLAVE;
                variaciones(p+1,c);
                c[i-1]=i-1;
            } else {
                escribir(v);
                v[p-1]=0;
            }
        }
    }
}

void escribir( int v[] ){
    int k;
    printf(" (");

    for( k=1 ; k<=n ; k++ ){
        printf("%c",conj[v[k-1]]);
        printf("%c", (k<n? ',':')' ));
    }
}
