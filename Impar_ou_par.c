#include <stdio.h>
#include <conio.h>
#include <stdlib.h> 
#include <locale.h>

int main(){

int num;
  setlocale (LC_ALL, "portuguese"); 
    printf("Digite um número inteiro: "); 
      scanf("%d", &num);

  if (num % 2 == 0){
    printf("Este número é par!");
  }

  else{
    printf("Este número é ímpar!");
  }

return 0;
}
