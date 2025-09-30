#include <stdio.h>

int main(){
  // Vetor Inicial
  int vetor[5] = {1, 2, 3, 4, 5};

  //Definido variável de armazenamento da soma
  int soma = 0;

  //Calculando elemento
  for (int i = 0; i < 5; i++) {
    soma += vetor[i];
  }
  printf("A soma dos elementos do vetor é: %d\n", soma);
  printf("\n");

  return 0;
  
}
