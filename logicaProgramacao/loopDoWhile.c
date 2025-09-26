#include <stdio.h>

int main(){
  // Ao digitar um número impar o programa sai.
  int i;
  do
  {
    printf("Digite um número:\n");
    printf("->Ímpar para continuar jogando!\n");
    printf("->Par para sair do jogo.\n");

    scanf("%d", &i);
    if (i % 2 == 0)
    {
      printf("%d é par!!\n", i);
    } else {
      printf("%d é ímpar\n", i);
    }
  } while (i % 2 != 0);

  printf("Número par digitado!!! Jogo acabou!\n");

  return 0;
}