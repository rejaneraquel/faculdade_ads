#include <stdio.h>;
#include <stdlib.h>;
#include <time.h>;

int main() {
  // Criando variáveis
  int escolhaJogador, escolhaComputador;

  // Inicializando o número aleatório
  srand(time(0));

  // Introdução
  printf("Bem Vindo ao Jogo Jokenpô!!\n");
  printf("Escolha uma opção:\n");
  printf("1. Pedra\n");
  printf("2. Papel\n");
  printf("3. Tesoura\n");
  
  // Usuário
  printf("Digite o número escolhido\n");
  scanf("%d", &escolhaJogador);
  
  // Computador
  escolhaComputador = rand() % 3 + 1;

  // Lógica do jogo
  switch (escolhaJogador)
  {
  case 1:
    printf("Jogador Pedra - \n");
    break;

  case 2:
    printf("Jogador Papel - \n");
    break;

  case 3:
    printf("Jogador Tesoura - \n");
    break;
  
  default:
    printf("Opção inválida\n");
    break;
  }

  switch (escolhaComputador)
  {
  case 1:
    printf("Computador Pedra - \n");
    break;

  case 2:
    printf("Computador Papel - \n");
    break;

  case 3:
    printf("Computador Tesoura - \n");
    break;
  }

  return 0;
}