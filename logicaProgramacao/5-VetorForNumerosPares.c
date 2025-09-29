#include <stdio.h>

int main(){

  //Declarando vetor de 5 inreiros
  int vetor[5];

  // i vai de 0 a 4 = {0,1,2,3,4}
  for (int i = 0; i < 5; i++) {
    // Exemplo: vetor[0] = 0 * 2; zero
    // Exemplo: vetor[1] = 1 * 2  dois
    vetor[i] = i * 2;
    printf("Vetor[%d] = %d\n", i, vetor[i]);
  }

    return 0;
}

/*
Saída:
Vetor[0] = 0
Vetor[1] = 2
Vetor[2] = 4
Vetor[3] = 6
Vetor[4] = 8
*/