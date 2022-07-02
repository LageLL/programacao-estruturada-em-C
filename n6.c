//Preencha uma matriz 3x3 e mostre o menor e o maior valor e suas respectivas posições.
#include <stdio.h>
void main()
{
    int m[3][3], l, c, maior = 0, menor = 0, posicaolmaior = 0, posicaocmaior = 0, posicaolmenor = 0, posicaocmenor = 0;
printf("Digite 9 numeros:\n");
    for(l=0;l<3;l++){
        for(c=0;c<3;c++) scanf("%d",&m[l][c]);
    }
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            if(l==0 && c==0) menor = m[l][c];
            if(m[l][c]>maior){
                 maior = m[l][c];
                 posicaolmaior = l;
                 posicaocmaior = c;
        }
            if(m[l][c]<menor){
                 menor = m[l][c];
                 posicaolmenor = l;
                 posicaocmenor = c;
            }
        }
    }
    printf("Matriz digitada abaixo:\n");
    for(l=0;l<3;l++){
        for(c=0;c<3;c++) printf("%d \t", m[l][c]);
        printf("\n");
    }
    printf("O maior numero é %d e se encontra na linha %d e coluna %d\n", maior, posicaolmaior+1, posicaocmaior+1);
    printf("O maior numero é %d e se encontra na linha %d e coluna %d\n", menor, posicaolmenor+1, posicaocmenor+1);
}