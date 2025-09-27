#include <stdio.h>

int main(){

  for (int i = 0; i < 10; i++) {
    if (i == 5)
      continue; // Pula a iteração quando i é 5;
    if (i == 8)
      break; // Sai do Loop quando i é 8;
    printf("%d\n", i);
  }
  return 0;
}