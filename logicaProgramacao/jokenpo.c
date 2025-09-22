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
  printf("Escolha Usuário: %d\n", escolhaJogador);

  // Computador
  escolhaComputador = rand() % 3 + 1;
  printf("Escolha Computador: %d\n", escolhaComputador);

  return 0;
}