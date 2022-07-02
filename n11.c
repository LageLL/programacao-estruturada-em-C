//Preencha uma matriz de inteiros 3x3 com números digitados pelo usuário e calcule sua determinante.
#include <stdio.h>
void main(){
    int l, c;
    float m[3][3], d;
    printf("Digite 9 números: \n");
    for(l=0;l<3;l++){
        for(c=0;c<3;c++){
            scanf("%f", &m[l][c]);
        }
    }
    printf("Matriz:\n");
    for(l=0;l<3;l++){ 
        for(c=0;c<3;c++) printf("%.2f\t",m[l][c]);
            printf("\n");
    }
    d=(((m[0][0]*m[1][1]*m[2][2])+(m[0][1]*m[1][2]*m[2][0])+(m[0][2]*m[1][0]*m[2][1]))-((m[2][0]*m[1][1]*m[0][2])+(m[2][1]*m[1][2]*m[0][0])+(m[2][2]*m[1][0]*m[0][1])));
        printf("O determinante é %.2f.\n", d);
}



  