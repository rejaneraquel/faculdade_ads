#include <stdio.h>

int main() {
  int index;

  char *nomeAlunos[3][3] = {
      {"Aluno 0", "Pt: 30", "Mat: 90"},
      {"Aluno 1", "Pt: 50", "Mat: 50"},
      {"Aluno 2", "Pt: 90", "Mat: 30"},
  };

  printf("Digite o npumero do aluno: \n");
  printf("Digite 0 para o aluno 0; \n");
  printf("Digite 1 para o aluno 1; \n");
  printf("Digite 2 para o aluno 2; \n");

  scanf("%d", &index);

  printf("As notas do %s são: %s , %s !\n", nomeAlunos[index][0], nomeAlunos[index][1], nomeAlunos[index][2]);

  return 0;
};