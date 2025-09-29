#include <stdio.h>

int main(){
  // Declarando Matriz 1
  int matriz1[2][2] = {
      {1, 2},
      {3, 4}
  };
  // Declarando Matriz 2
  int matriz2[2][2] = {
      {5, 6},
      {7, 8}
  };

  // Declarando Matriz que resultara da soma
  int matrizSoma[2][2];

  // Somando as duas matrizes
  for (int i = 0; i < 2; i++){
    for (int j = 0; j < 2; j++) {
      matrizSoma[i][j] = matriz1[i][j] + matriz2[i][j];
    // Exibindo matriz resultante
      printf("matrizSoma[%d][%d] = %d\t", i, j, matrizSoma[i][j]);
    }
    printf("\n");
  }
    return 0;
}