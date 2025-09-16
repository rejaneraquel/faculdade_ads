#include <stdio.h>

int main(){
  float nota1, nota2, nota3, nota4, media;

  // Título Programa
  printf("***Programa de cálculo de média***\n");

  // Inserindo e armazenando notas
  // Nota 01
  printf("Digite a sua primeira nota: \n");
  scanf("%f", &nota1);

  // Nota 02
  printf("Digite a sua segunda nota: \n");
  scanf("%f", &nota2);

  // Nota 03
  printf("Digite a sua terceira nota: \n");
  scanf("%f", &nota3);

  // Nota 04
  printf("Digite a sua quarta nota: \n");
  scanf("%f", &nota4);

  // Calculando a média
  media = (nota1 + nota2 + nota3 + nota4) / 4;

  printf("Notas inseridas\n");
  printf("Nota 1: %.2f\n", nota1);
  printf("Nota 2: %.2f\n", nota2);
  printf("Nota 3:%.2f\n", nota3);
  printf("Nota 4: %.2f\n", nota4);

  printf("A média do aluno é:%.1f\n", media);
};
