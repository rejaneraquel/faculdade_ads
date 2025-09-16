#include <stdio.h>

int main() {
  int a = 10;
  int b = 5;

  //Operadores Aritméticos
  int soma = a + b;
  int subtracao = a - b;
  int multiplicacao = a * b;
  int divisao = a / b;

  //Operadores de Atribuição
  a += 2; // (10 + 2) -> a será 12
  b *= 3; // (5*3) -> b será 15

  //Operadores de incremento e decremento
  a++; // (12+1) -> a será 13
  b--; // (15-1) -> b será 14

  //Pré e pos Incremento/Decremento
  /*
  Funciona como se fosse duas operações:
  b = ++a -> incrementa primeiroa e iguala a 'a'; terão valores iguais
  b = a++ -> iguala a 'a' primeiro e depois incrementa; terão valores diferentes 
  */
  int c = 5;
  int d;
  printf("-> Valor de c antes do incremento (int c=5): %d\n", c);
  printf("-> d ainda não possui nenhum valor atribuído (int d)\n");

  c++;
  printf("-> Valor de c após o incremento (c++): %d\n", c);
  
  d = c;
  printf("-> Valor de d após o atribuir o valor de c (d=c): %d\n", d);
  printf("****************************************************\n");
  
  int e = 5;
  int f = ++e;
  printf("-> Valor de e antes do incremento (int c=5): %d\n", e);
  printf("-> Valor de f após o pré-incremento (int f=++e): %d\n", f);
  printf("****************************************************\n");

  //Exibição de Resultados
  printf("Soma: %d\n", soma);
  printf("Subtração: %d\n", subtracao);
  printf("Multiplicação: %d\n", multiplicacao);
  printf("Divisão: %d\n", divisao);
  printf("Novo valor de a (após += 2 e ++): %d\n", a);
  printf("Novo valor de b (após *= 3 e --): %d\n", b);
  
  
}