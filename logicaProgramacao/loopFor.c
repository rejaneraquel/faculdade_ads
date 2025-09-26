#include <stdio.h>

int main(){
// Código de uma Tabuada
  int numero, i;

  // Fora do for para que rode somente 1 vez
  printf("Digite um número para cálculo\n");
  scanf("%d", &numero);

  for (i = 0; i <= 10; i++)
  {
    printf("Multiplicação\n");
    printf("%d x %d = %d\n", i, numero, i * numero);

  }

  return 0;
}