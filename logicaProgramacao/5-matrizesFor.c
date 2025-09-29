#include <stdio.h>

int main() {
  // Declarando a matriz sem os valores;
  int matriz[3][3];

  // Definindo i como o primeiro index da matrix;
  for (int i = 0; i < 3; i++)
  {
    // Definindo j como o segundo index e dentro do for i
    for (int j = 0; j < 3; j++){
      matriz[i][j] = i + j; // Regra para os valores
      printf("matriz[%d][%d] = %d\n", i, j, matriz[i][j]);
    }
  }

    return 0;
}