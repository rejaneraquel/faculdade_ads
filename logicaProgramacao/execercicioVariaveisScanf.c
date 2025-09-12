
#include <stdio.h>

int main()
{
  //Declarando as variáveis
  int idade;
  char nome[20];
  char opcao;
  
  // idade
  printf("Digite sua idade: \n");
  scanf("%d", &idade);
  printf("Sua idade é: %d\n", idade);
  
  //nome
  printf("\nDigite seu nome: \n");
  scanf("%s", nome);
  printf("O nome é: %s\n", nome);
  
  // 1 caracter
  printf("\nDigite a opção: \n");
  scanf(" %c", &opcao);
  printf("A opção é: %c\n", opcao);
  
  return 0;
}