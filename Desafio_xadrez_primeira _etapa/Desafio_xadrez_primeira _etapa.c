#include <stdio.h>
 int main(){

    int  opcao;

    printf("Selecione qual peça você deseja mexer.\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
     case 1:
           printf("Movimento da Torre:\n");
     for (int torre = 1; torre <= 5; torre++) {
        printf("Direita %d\n", torre);
     }
        break;

     case 2:
         printf("Movimento do Bispo:\n");
     int bispo = 1;
     while (bispo <= 5){
        printf("Cima Direita %d\n", bispo);
      bispo++;
     }
        break;

     case 3:
     printf("Movimento da Rainha:\n");
     int rainha = 1;
     do {
        printf("Esquerda %d\n", rainha);
        rainha++;
      } while (rainha <= 8);

     default:
     printf("Opção inválida.\n");
         
    }



    return 0;
 }