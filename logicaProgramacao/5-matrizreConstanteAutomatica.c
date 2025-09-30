#include <stdio.h>

// Definindo tamanho da Matriz automaticamente
#define LINHAS 5
#define COLUNAS 5

int main(){

  int matriz[LINHAS][COLUNAS];

  int soma = 0;

  for (int i = 0; i < LINHAS; i++) {
    for (int j = 0; j < COLUNAS; j++) {
      soma++;

      // Atribuindo o valor do index
      matriz[i][j] = soma;
      printf("%d", matriz[i][j]);

    }
    printf("\n");
  }

    return 0;
}