#include <stdio.h>
#include <string.h>
 int main(){
    char obj[50];
  printf("Digite seu objetivo, ex: quem é o melhor jogador da história dos Santos (max: 50 caracteres):   ");
  fgets(obj, sizeof(obj), stdin);
 
    char p1[10];
    printf("digite o primeiro nome (max 10 caractéres): "); 
    scanf("%10s", p1);
       char p2[10];
    printf("digite o segundo nome (max 10 caractéres): "); 
    scanf("%10s", p2);
       char p3[10];
    printf("digite o terceiro nome (max 10 caractéres): "); 
    scanf("%10s", p3);
     char p4[10];
    printf("digite o quarto nome (max 10 caractéres): ");
    scanf("%10s", p4);
    char p5[10];
    printf("digite o quinto nome (max 10 caractéres): ");
    scanf("%10s", p5);
      char p6[10];
    printf("digite o sexto nome (max 10 caractéres): ");
    scanf("%10s", p6);
      char p7[10];
    printf("digite o sétimo nome (max 10 caractéres): ");
    scanf("%10s", p7);
      char p8[10];
    printf("digite o oitavo nome (max 10 caractéres): ");
    scanf("%10s", p8);
      char p9[10];
    printf("digite o nono nome (max 10 caractéres): ");
    scanf("%10s", p9);
      char p10[10];
    printf("digite o décimo nome (max 10 caractéres): ");
    scanf("%10s", p10);
     printf("\n %s \n", obj);

    char r1[10];
    
    printf("%s ou %s?", p1, p2);
    scanf("%10s", r1);
    if (strcmp(p1, r1) != 0 && strcmp(p2, r1) != 0){
      printf("erro, digite corretamente \n");
     
      
    }
    else {
      char r2[10];
    printf("%s ou %s?", r1, p3);
    scanf("%10s", r2);
        if (strcmp(r1, r2) != 0 && strcmp(p3, r2) != 0){
      printf("erro, digite corretamente");
    }
    else{
      char r3[10];
    printf("%s ou %s?", r2, p4);
    scanf("%10s", r3); 
        if (strcmp(r2, r3) != 0 && strcmp(p4, r3) != 0){
      printf("erro, digite corretamente");
    }
    else {
      char r4[10];
    printf("%s ou %s?", r3, p5);
    scanf("%10s", r4);
        if (strcmp(r3, r4) != 0 && strcmp(p5, r4) != 0){
      printf("erro, digite corretamente");
    }
    else{
       char r5[10];
    printf("%s ou %s?", r4, p6);
    scanf("%10s", r5);
        if (strcmp(r4, r5) != 0 && strcmp(p6, r5) != 0){
      printf("erro, digite corretamente\n");
      
    }
    else{
     char r6[10];
    printf("%s ou %s?", r5, p7);
    scanf("%10s", r6);
        if (strcmp(r5, r6) != 0 && strcmp(p7, r6) != 0){
      printf("erro, digite corretamente");
    }
    else{
      char r7[10];
    printf("%s ou %s?", r6, p8);
    scanf("%10s", r7);
        if (strcmp(r6, r7) != 0 && strcmp(p8, r7) != 0){
      printf("erro, digite corretamente");
    }
    else{
      char r8[10];
    printf("%s ou %s?", r7, p9);
    scanf("%10s", r8);
        if (strcmp(r7, r8) != 0 && strcmp(p9, r8) != 0){
      printf("erro, digite corretamente");
    }
    else{
           char r9[10];
    printf("%s ou %s?", r8, p10);
    scanf("%10s", r9);
        if (strcmp(p10, r9) != 0 && strcmp(r8, r9) != 0){
      printf("erro, digite corretamente");
    }
    else{
        printf("%s é o mais escolhido \n", r9);   
    }
  }
    }
    }
    }
    }
    }
    }
    } 
 }
    printf("%s é o melhor", r9); 
 }
