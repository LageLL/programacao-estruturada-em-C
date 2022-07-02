//Leia uma palavra e mostre qual letra aparece mais vezes nela
#include <stdio.h>
#include <string.h>
void main()
{
   char palavra[30], maiorstr;
   int i = 0, alfabeto[26] = {0}, x, maiorint=0;

   printf("Digite uma palavra:\n");
   scanf("%s", palavra);

   while (palavra[i] != '\0') {
      if (palavra[i] >= 'a' && palavra[i] <= 'z') {
         x = palavra[i] - 'a';
         alfabeto[x]++;
      }
      i++;
   }
   for (i = 0; i < 26; i++){
      if(i==0) maiorstr = i+'a';
      if(alfabeto[i]>maiorint) {
         maiorint = alfabeto[i];
         maiorstr = i + 'a';
      }
   }
   printf("A letra que mais aparece: %c .\n",maiorstr);
}