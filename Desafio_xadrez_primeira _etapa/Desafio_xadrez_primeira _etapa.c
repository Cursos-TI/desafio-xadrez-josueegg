#include <stdio.h>
 int main(){

    int  opcao,movimento,movimentocompleto;

    printf("Selecione qual peça você deseja mexer.\n");
    printf("1- Torre:\n");
    printf("2- Bispo:\n");
    printf("3- Rainha:\n");
    printf("4- Cavalo:\n");
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
      break;

      case 4:
      printf("Movimento com cavalo:\n");
      printf("Escolha para qual lado deseja movimentar:\n");
      printf("1-Cima Direita:\n"); 
      printf("2-Cima Esquerda:\n");
      printf("3-Baixo Direita:\n");
      printf("4-Baixo Esquerda:\n");
      scanf("%d", &movimento);

        switch (movimento)
         {
         case 1:
         printf("Movimento do cavalo:\n");
     for (int cavalo = 1; cavalo < 3; cavalo++) {
        printf("Cima:\n");
     }printf("Direita:\n");
     break;

         case 2:
         printf("Movimento do cavalo:\n");
     for (int cavalo = 1; cavalo < 3; cavalo++) {
        printf("Cima:\n");
     }printf("Esquerda:\n");
     break;

         case 3:
         printf("Movimento do cavalo:\n");
     for (int cavalo = 1; cavalo < 3; cavalo++) {
        printf("Baixo:\n");
     }printf("Direita:\n");
     break;

         case 4:
         printf("Movimento do cavalo:\n");
     for (int cavalo = 1; cavalo < 3; cavalo++) {
        printf("Baixo:\n");
     }printf("Esquerda:\n");
     break;
            
         default:
         printf("Opção invalida!!");
            break;
         }
      
break;

     default:
     printf("Opção inválida!!\n");
         break;
    }



    return 0;
 }