#include <stdio.h>
#include <string.h>
  int main(){
    char obj[50];
  printf("Digite seu objetivo, ex: quem é o melhor jogador da história dos Santos (max: 50 caracteres):   ");
  fgets(obj, sizeof(obj), stdin);
 
    char p1[30];
    printf("digite o primeiro nome: "); 
    scanf(" %[^\n]", p1);
       char p2[30];
    printf("digite o segundo nome: "); 
    scanf(" %[^\n]", p2);
       char p3[30];
    printf("digite o terceiro nome: "); 
    scanf(" %[^\n]", p3);
     char p4[30];
    printf("digite o quarto nome: ");
    scanf(" %[^\n]", p4);
    char p5[30];
    printf("digite o quinto nome: ");
    scanf(" %[^\n]", p5);
      char p6[30];
    printf("digite o sexto nome: ");
    scanf(" %[^\n]", p6);
      char p7[30];
    printf("digite o sétimo nome: ");
    scanf(" %[^\n]", p7);
      char p8[30];
    printf("di10sgite o oitavo nome: ");
    scanf(" %[^\n]", p8);
      char p9[30];
    printf("digite o nono nome: ");
    scanf(" %[^\n]", p9);
      char p10[30];
    printf("digite o décimo nome: ");
    scanf(" %[^\n]", p10);
     printf("\n %s \n", obj);

    char r1[10];
    do{
     printf("%s ou %s?", p1, p2);
    scanf(" %[^\n]", r1);
    if (strcmp(p1, r1) != 0 && strcmp(p2, r1) != 0){
      printf("erro, digite corretamente \n");
    }
    }while(strcmp(p1, r1) != 0 && strcmp(p2, r1) != 0);

      char r2[10];
      do{
            printf("%s ou %s?", r1, p3);
    scanf(" %[^\n]", r2);
        if (strcmp(r1, r2) != 0 && strcmp(p3, r2) != 0){
      printf("erro, digite corretamente \n");
    }
  
      }while(strcmp(r1, r2) != 0 && strcmp(p3, r2) != 0);

      char r3[10];
      do{
     printf("%s ou %s?", r2, p4);
    scanf(" %[^\n]", r3); 
        if (strcmp(r2, r3) != 0 && strcmp(p4, r3) != 0){
      printf("erro, digite corretamente \n");
    }
      }while(strcmp(r2, r3) != 0 && strcmp(p4, r3) != 0);
 
      char r4[10];
      do{
      printf("%s ou %s?", r3, p5);
    scanf(" %[^\n]", r4);
        if (strcmp(r3, r4) != 0 && strcmp(p5, r4) != 0){
      printf("erro, digite corretamente \n");
    }
      }while(strcmp(r3, r4) != 0 && strcmp(p5, r4) != 0);

       char r5[10];
    do{
    printf("%s ou %s?", r4, p6);
    scanf(" %[^\n]", r5);
        if (strcmp(r4, r5) != 0 && strcmp(p6, r5) != 0){
      printf("erro, digite corretamente \n");
    }
    }while(strcmp(r4, r5) != 0 && strcmp(p6, r5) != 0);

     char r6[10];
     do{
    printf("%s ou %s?", r5, p7);
    scanf(" %[^\n]", r6);
        if (strcmp(r5, r6) != 0 && strcmp(p7, r6) != 0){
      printf("erro, digite corretamente \n");
    }
     }while(strcmp(r5, r6) != 0 && strcmp(p7, r6) != 0);

      char r7[10];
      do{
    printf("%s ou %s?", r6, p8);
    scanf(" %[^\n]", r7);
        if (strcmp(r6, r7) != 0 && strcmp(p8, r7) != 0){
      printf("erro, digite corretamente \n");
    }        
      }while(strcmp(r6, r7) != 0 && strcmp(p8, r7) != 0);


      char r8[10];
      do{
    printf("%s ou %s?", r7, p9);
    scanf(" %[^\n]", r8);
        if (strcmp(r7, r8) != 0 && strcmp(p9, r8) != 0){
      printf("erro, digite corretamente \n");
    }        
      }while(strcmp(r7, r8) != 0 && strcmp(p9, r8) != 0);


           char r9[10];
           do{
    printf("%s ou %s?", r8, p10);
    scanf(" %[^\n]", r9);
        if (strcmp(p10, r9) != 0 && strcmp(r8, r9) != 0){
      printf("erro, digite corretamente \n");
    }
           }while(strcmp(p10, r9) != 0 && strcmp(r8, r9) != 0);

        printf("%s é o mais escolhido \n", r9);   
    
  }
  
 
