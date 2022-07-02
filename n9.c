//Faça um programa capaz de realizar multiplicação entre uma matriz 2x3 por uma 3x2.
#include <stdio.h>
void main ()
{
    int matriz[2][3],matriz2[3][2],l,c,produto[2][2], x, aux =0;
    printf("Digite os 6 números da matriz 2x3: ");
    for(l=0;l<2;l++) for(c=0;c<3;c++) scanf("%d",&matriz[l][c]);
    printf("Digite os 6 números da matriz 3x2: ");
    for(l=0;l<3;l++) for(c=0;c<2;c++) scanf("%d",&matriz2[l][c]);
    
    printf("\nMatriz 2x3:\n");
    for(l=0;l<2;l++){
        for(c=0;c<3;c++) printf("%d\t",matriz[l][c]);
            printf("\n");
    }
    printf("\nMatriz 3x2:\n");
    for(l=0;l<3;l++){
        for(c=0;c<2;c++) printf("%d\t",matriz2[l][c]);
            printf("\n");
    }
    printf("\n");
    
    for(l = 0; l < 2; l++) {
		for(c = 0; c < 2; c++) {
			produto[l][c] = 0;
			for(x = 0; x < 3; x++) aux +=  matriz[l][x] * matriz2[x][c];
			produto[l][c] = aux;
			aux = 0;
		}
	}
    printf("O resultado é:\n");
    for(l=0;l<2;l++){
        for(c=0;c<2;c++) printf("%d\t",produto[l][c]);
        printf("\n");
    }
}

