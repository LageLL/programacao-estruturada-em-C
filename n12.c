#include <stdio.h>

int main(){
    int v[7], n, i, cont, aux, primo;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    primo=n;
    for(i=0;i<7;i++){
        n++;
        cont=0;
        if(n>1) for(aux=1;aux<=n;aux++) if(n%aux==0) cont++;
        if(cont==2)v[i]=n;
        else i--;
    }
    printf("os numeros primos depois de %d sao: ", primo);
    for(i=0;i<7;i++){
        printf("\t%d", v[i]);
    }
     printf("\n");
}
