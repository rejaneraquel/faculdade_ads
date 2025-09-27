#include <stdio.h>

int main(){
  //OBS: Dentro do for as variáveis serão do mesmo tipo, por isso só declarei int na primeira.
  for (int i = 0, j = 10; i < j; i++, j--){
    printf("i = %d, j = %d \n", i, j);
  }
  return 0;
}