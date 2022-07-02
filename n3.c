//Preencha um vetor de 10 posições e mostre o vetor e as posições dos números primos.
#include <stdio.h>
void main(){
    float v[10];
    int  i, x, j, cont = 0;
    //preenchendo o vetor
    printf("Digite 10 numeros");
    for (i = 0; i < 10; i++)scanf("%f", &v[i]);
    //mostrando o vetor
    for (i = 0; i < 10; i++) printf("%.2f\t", v[i]);
    printf("\n");//pulando linha pra não ficar feio
    //vendo se o numero é primo e mostrando a posição
    for (i = 0; i < 10; i++){
        x = v[i];
        for(j=1;j<=x;j++) if(x % j == 0) cont++;
        if(cont == 2) printf("O número da posição %d é primo.\n", i);
        cont = 0;
    }
}