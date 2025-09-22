#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;

int main() {
  // Criando variáveis
  int escolhaJogador, escolhaComputador;

  //Incializando o número aleatório
  srand(time(0));


  printf("Bem Vindo ao Jogo Jokenpô!!\n");
  printf("Escolha uma opção:\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  printf("Digite o número escolhido\n");
  scanf("%d", &escolhaJogador);
  printf("Testando: %d\n", escolhaJogador);

  return 0;
}