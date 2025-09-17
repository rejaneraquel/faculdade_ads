#include <stdio.h>

int main(){
  
  //Definindo as variáveis
  char produtoA[30] = "Produto A";
  char produtoB[30] = "Produto B";

  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 2000;

  float valorA = 10.50;
  float valorB = 20.40;

  unsigned int estoqueMinimoA = 500;
  unsigned int estoqueMinimoB = 2500;

  double valorTotalA = estoqueA * valorA;
  double valorTotalB = estoqueB * valorB;

  //Exibindo informações dos produtos
  printf("O %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
  printf("O %s tem valor total de R$ %.2f\n", produtoA, valorTotalA);
  printf("O %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);
  printf("O %s tem valor total de R$ %.2f\n", produtoB, valorTotalB);

  //Comparações com o valor mínimo de estoque
  //Definindo o cálculo fora do printf
  int resultadoA = estoqueA > estoqueMinimoA;
  int resultadoB = estoqueB > estoqueMinimoB;

  printf("O %s tem estoque mínimo? %d (1 - SIM, 0 - Não)\n", produtoA, resultadoA);
  printf("O %s tem estoque mínimo? %d (1 - SIM, 0 - Não) \n", produtoB, resultadoB);

  //Comparações entre os valores totais dos produtos

  printf("O valor total do %s (R$ %.2f) é maior que o valor total do %s (R$ %.2f)?\n%d (1 - SIM, 0 - Não)\n", produtoA, valorTotalA, produtoB, valorTotalB, valorTotalA > valorTotalB);

  return 0;
}