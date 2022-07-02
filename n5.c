//Preencha um vetor de 14 posições e transforme todos os números pares no ímpar imediatamente superior.
#include <stdio.h>
void main()
{
    int i, v[14];
    printf("Digite 14 números: \t");
    for(i=0;i<14;i++){
        scanf("%d", &v[i]);
        if(v[i] % 2 == 0) v[i]++;
    }
    printf("Os números atualizados são: \n");
    for(i=0;i<14;i++) printf("%d\t", v[i]);
}