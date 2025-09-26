#include <stdio.h>

int main(){
  int num = 7;

  while (num <=15)
  {
    if(num % 2 == 0)
    {
    printf("Número %d é par\n", num);
    num++;
    } else {
    printf("Número %d é impar\n", num);
    num++;
    };
  }
  printf("Número %d maior que o permitido.\n", num);
}