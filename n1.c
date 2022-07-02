/*Substitua a diagonal principal de uma matriz lida pela média da diagonal secundária. Mostre a matriz
resultante*/
#include <stdio.h>
void main()
{
    int i, j, tamanho=0;
    float  soma=0, media=0;
    
    printf("Digite a ordem da matriz: ");
    scanf("%d", &tamanho);
    //pegando os valores da matriz
    float m[tamanho][tamanho];
    
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++){
            printf("Digite o valor que ficará na linha %d e coluna %d da matriz: ", i+1, j+1);
            scanf("%f", &m[i][j]);
        }
    }
    printf("Matriz digitada abaixo:");
    for(i=0;i<tamanho;i++){
        printf("\n");
        for(j=0;j<tamanho;j++) printf("%.1f \t", m[i][j]);
    }
    
        //pega diagonal secundaria e soma na variavel soma.
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++) if(i+j == tamanho-1) soma += m[i][j];
    }
        media = soma/tamanho;
        //substitui a diagonal principal pela media.
    for(i=0;i<tamanho;i++){
        for(j=0;j<tamanho;j++) if(i == j) m[i][j] = media;
    }
        printf("\nMatriz alterada abaixo:");
        //imprime a matriz como resultado
    for(i=0;i<tamanho;i++){
        printf("\n");
            for(j=0;j<tamanho;j++) printf("%.2f \t", m[i][j]);
    }
}