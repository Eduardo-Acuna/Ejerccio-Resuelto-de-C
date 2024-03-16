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
