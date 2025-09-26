#include <stdio.h>

int main(){
  int i, j;
  char letra;

  for (i = 0; i <= 5; i++)
  {
    char letra = 'A';
    for (j = 1; j <= i; j++) // Vinculou j ao valor de i
    
    {
      printf("%c ", letra);
      ++letra;

    }
    printf("\n");
  }

  return 0;
}