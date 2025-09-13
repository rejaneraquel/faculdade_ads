#include <stdio.h>

int main(){
  // Declarando as variáveis
  int idade, matricula;
  float altura;
  char nome[50];

  //Imprimindo as perguntas e captando as respostas
  //Nome
  printf("Informe o nome:  \n");
  scanf("%s", &nome);
  //Idade
  printf("Informe a idade: \n");
  scanf("%d", &idade);

  //Matricula
  printf("Informe a matrícula: \n");
  scanf("%d", &matricula);

  //Altura
  printf("Informe a altura: \n");
  scanf("%f", &altura);

  //Retorno dos dados inseridos
  printf("\nAluno: %s - Matrícula: %d \n", nome, matricula);
  printf("Idade: %d - Altura: %.2f \n", idade, altura);
  return 0;
}
