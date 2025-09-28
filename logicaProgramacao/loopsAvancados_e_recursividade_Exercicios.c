#include <stdio.h>

// Sem especificação: VOID
void recursivo(int numero)
{
  if (numero > 0)
  {
    printf("%d\n", numero);
    // Fazendo a chamada da função e definindo um decremento
    recursivo(numero - 1);
  }
}

int main()
{
  int quantidade = 10;
  printf("Contagem regressiva...\n");
  recursivo(quantidade);

  return 0;
}