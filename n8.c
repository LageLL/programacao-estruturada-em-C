//Preencha um vetor de 12 posições e calcule a média dos valores entre as posições x e y (inclusive) digitadas
//pelo usuário.
#include <stdio.h>

void main()
{
    int v[12], i, x, y,p1, p2, cont;
    float media=0;
    printf("Digite 12 números: \n");
    for(i=0;i<12;i++) scanf("%d", &v[i]);
    
    printf("Digite uma posição de 0 á 11: \n");
    scanf("%d", &x);
    printf("Digite outra posição de 0 á 11: \n");
    scanf("%d", &y);
    p1=x;
    p2=y;
    for(i=0;i<12;i++) printf("%d\t", v[i]);
    printf("\n");
    if(p1 < p2){
        for( ;x <= y; x++) media += v[x];
        cont=(p2-p1)+1;
        printf("A média  entre a posição %d e %d é %.2f", p1, p2, media/cont);
    }if(p2 < p1){
        for( ;y <= x; y++) media += v[y];
        cont=(p1-p2)+1;
        printf("A média  entre a posição %d e %d é %.2f", p2, p1, media/cont);
    }
}