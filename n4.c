//Leia uma matriz 7 x 7 e mostre a soma da coluna do meio e a média da última linha
#include <stdio.h>
void main()
{
    float m[7][7], soma=0, media=0;
    int l, c;
    printf("Digite os 49 numeros da matriz:\n");
    for(l=0;l<7;l++){
        for(c=0;c<7;c++) scanf("%f",&m[l][c]);
    }
    //soma os numeros da coluna do meio
    for(l=0;l<7;l++) soma +=m[l][3];
    printf("A soma da coluna do meio é: %.2f\n", soma);
    //soma os numeros da ultima linha e dps / por 7.
    for(c=0;c<7;c++) media+= m[6][c];
    printf("A média da última linha da matriz é: %.2f\n", media/7);        
}