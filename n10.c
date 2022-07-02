//Ordene um vetor de inteiros de 10 posições em ordem crescente.
#include <stdio.h>

void main(){
    int v[10], i, j, aux;
    printf("Digite 10 números: ");
    for ( i = 0; i < 10; i++) scanf("%d", &v[i]);

    for (i = 0; i < 10; i++){
        for (j = i; j < 10; j++){
            if (v[i]>v[j]){
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }   
    }
    printf("O vetor crescente é:");
    for ( i = 0; i < 10; i++)printf("%d\n", v[i]);
    
}