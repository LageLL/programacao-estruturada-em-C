/*Troque as vogais de uma palavra lida por letras maiúsculas*/
#include <stdio.h>
#include <string.h>

void main(){
    int i;
    char palavra[30];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
        for(i=0;i<30;i++)if(palavra[i] == 'a'|| palavra[i] == 'e'|| palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') palavra[i] -= 32;
               //Depois de MUITOS estudos li que um cara falou que na tabela ASCII letra minuscula - 32 = letra maiuscula.
        printf("A palavra é: %s", palavra);
    
}