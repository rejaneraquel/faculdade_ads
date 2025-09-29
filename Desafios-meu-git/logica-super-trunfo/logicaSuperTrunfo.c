#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
   
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[20], nomeCidade2[20];
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float pib1, area1, pib2, area2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;
    // Dados Carta 01:
    // Estado
    printf("Inserindo dados da Carta 01 \nDigite o Estado: \n");
    scanf(" %c", &estado1);

    // Código Carta
    printf("Insira o código do estado: \n");
    scanf("%s", codigoCarta1);

    // Nome Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCidade1);

    // População
    printf("Insira a população: \n");
    scanf("%lu", &populacao1);

    // Area em km²
    printf("Insira a area(km²): \n");
    scanf("%f", &area1);

    // PIB
    printf("Insira o PIB: \n");
    scanf("%f", &pib1);

    // Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos1);

    // Carta 02
    //  Estado
    printf("\nInserindo dados da Carta 02 \nDigite o Estado: \n");
    scanf(" %c", &estado2);

    // Código Carta
    printf("Insira o código do estado: \n");
    scanf("%s", codigoCarta2);

    // Nome Cidade
    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeCidade2);

    // População
    printf("Insira a população: \n");
    scanf("%lu", &populacao2);

    // Area em km²
    printf("Insira a area(km²): \n");
    scanf("%f", &area2);

    // PIB
    printf("Insira o PIB: \n");
    scanf("%f", &pib2);

    // Pontos Turísticos
    printf("Quantidade de Pontos Turísticos: \n");
    scanf("%d", &pontosTuristicos2);

/*
// Variáveis previamente definidas para teste
  char estado1 = 'A';
  char codigoCarta1[6] = "A01";
  char nomeCidade1[20] = "SP";
  unsigned long int populacao1 = 12325000;
  float area1 = 1521.11;
  float pib1 = 699.28;
  int pontosTuristicos1 = 50;
  float densidade1, pibPerCapita1;

  char estado2 = 'B';
  char codigoCarta2[6] = "B02";
  char nomeCidade2[20] = "RJ";
  unsigned long int populacao2 = 6748000;
  float area2 = 1200.25;
  float pib2 = 300.50;
  int pontosTuristicos2 = 30;
  float densidade2, pibPerCapita2;
*/
  
  // Calculando densidade populacional
  densidade1 = populacao1 / area1;
  densidade2 = populacao2 / area2;

  // Calculando PIB Per Capita
  //  Adicionando a multiplicação para tornar bilhões
  pibPerCapita1 = (pib1 * 1000000000) / populacao1;
  pibPerCapita2 = (pib2 * 1000000000) / populacao2;

  // Calculando super poder
  double superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
  double superpoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

  // Escolhendo atributos para comparação
  printf("Escolha dois atributos diferente que deseja comparar:\n");
  printf("1. População;\n");
  printf("2. Área;\n");
  printf("3. PIB;\n");
  printf("4. Número de Pontos Turísticos;\n");
  printf("5. Densidade Demográfica;\n");
  printf("6. PIB Percapita;\n");
  printf("7. Super Poder;\n");
  int atributoEscolhido1, atributoEscolhido2;
  
  printf("Digite a 1ª opção escolhida:\n");
  scanf("%d", &atributoEscolhido1);

  printf("Digite a 2ª opção escolhida:\n");
  scanf("%d", &atributoEscolhido2);

  // Invalidando a escolha de atributos iguais

  if ( atributoEscolhido1 == atributoEscolhido2)
    {
      printf("Atributos não podem se repetir! Por favor escolha atributos diferentes\n");
    }
      else
    { 
      // Comparação de Cartas:
      // Desenvolva a lógica de comparação 1 atributo
      printf("\n### Comparação Atributo 1 ###\n");
      int pontuacao1 = 0;
      int pontuacao2 = 0;
      switch (atributoEscolhido1)
      {

        // População
        case 1:
          printf("Atributo: População\n");
          printf("Carta 01 %s: %lu habitantes\n", nomeCidade1, populacao1);
          printf("Carta 02 %s: %lu habitantes\n", nomeCidade2, populacao2);

          if (populacao1 > populacao2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (populacao1 < populacao2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          };
          if (populacao1 == populacao2)
          {
              printf("Houve um empate!!!\n");

          }
          break;

        // Área
        case 2:
          printf("Atributo: Área\n");
          printf("Carta 01 %s: %.2f Km²\n", nomeCidade1, area1);
          printf("Carta 02 %s: %.2f Km²\n", nomeCidade2, area2);

          if (area1 > area2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (area1 < area2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          }
          if (area1 == area2)
          {
              printf("Houve um empate!!!\n");
          };
          break;

        // PIB
        case 3:
          printf("Atributo: PIB\n");
          printf("Carta 01 %s: %.2f Km²\n", nomeCidade1, pib1);
          printf("Carta 02 %s: %.2f Km²\n", nomeCidade2, pib2);

          if (pib1 > pib2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (pib1 < pib2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          };
          if (pib1 == pib2)
          {
              printf("Houve um empate!!!\n");
          }
          break;

        // Pontos Turísticos
        case 4:
          printf("Atributo: Pontos Turísticos\n");
          printf("Carta 01 %s: %d pontos turísticos\n", nomeCidade1, pontosTuristicos1);
          printf("Carta 02 %s: %d pontos turísticos\n", nomeCidade2, pontosTuristicos2);

          if (pontosTuristicos1 > pontosTuristicos2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (pontosTuristicos1 < pontosTuristicos2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          }
          if (pontosTuristicos1 == pontosTuristicos2)
          {
              printf("Houve um empate!!!\n");
          };
          break;

        // Densidade Populacional
        case 5:
          printf("Atributo: Densidade Populacional\n");
          printf("Carta 01 %s: %.2f\n", nomeCidade1, densidade1);
          printf("Carta 02 %s: %.2f\n", nomeCidade2, densidade2);

          if (densidade1 < densidade2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (densidade1 > densidade2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          }
          if (densidade1 == densidade2)
          {
              printf("Houve um empate!!!\n");
          };
          break;

        // PIB Percapita
        case 6:
          printf("Atributo: PIB percapita\n");
          printf("Carta 01 %s: %.2f Km²\n", nomeCidade1, pibPerCapita1);
          printf("Carta 02 %s: %.2f Km²\n", nomeCidade2, pibPerCapita2);

          if (pibPerCapita1 > pibPerCapita2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (pibPerCapita1 < pibPerCapita2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          };
          if (pibPerCapita1 == pibPerCapita2)
          {
              printf("Houve um empate\n!!!");
          }
          break;

        // Super Poder
        case 7:
            printf("Atributo: Super Poder\n");
            printf("Carta 01 %s: %.2lf Km²\n", nomeCidade1, pibPerCapita1);
            printf("Carta 02 %s: %.2lf Km²\n", nomeCidade2, pibPerCapita2);

            if (superpoder1 > superpoder2)
            {
                printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
                pontuacao1++;
            }
            if (superpoder1 < superpoder2)
            {
                printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
                pontuacao2++;
            };
            if (superpoder1 == superpoder2)
            {
                printf("Houve um empate\n!!!");
            }
            break;

        // Opção Inválida
        default:
          printf("Opção inválida! Tente Novamente\n");
      };
    //  printf("\nPontuação Rodada 01\n");
    //  printf("Pontuação: Carta 01 %d\n", pontuacao1);
    //  printf("Pontuação: Carta 02 %d\n", pontuacao2);

      // Desenvolva a lógica de comparação 2 atributo
      printf("\n### Comparação Atributo 2 ###\n");
      switch (atributoEscolhido2)
      {

          // População
        case 1:
          printf("Atributo: População\n");
          printf("Carta 01 %s: %lu habitantes\n", nomeCidade1, populacao1);
          printf("Carta 02 %s: %lu habitantes\n", nomeCidade2, populacao2);

          if (populacao1 > populacao2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
              printf("Pontuação: Carta 01 %d\n", pontuacao1);
              printf("Pontuação: Carta 02 %d\n", pontuacao2);
          }
          if (populacao1 < populacao2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
              printf("Pontuação: Carta 01 %d\n", pontuacao1);
              printf("Pontuação: Carta 02 %d\n", pontuacao2);
          };
          if (populacao1 == populacao2)
          {
              printf("Houve um empate!!!\n");
          }
          break;

        // Área
        case 2:
          printf("Atributo: Área\n");
          printf("Carta 01 %s: %.2f Km²\n", nomeCidade1, area1);
          printf("Carta 02 %s: %.2f Km²\n", nomeCidade2, area2);

          if (area1 > area2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (area1 < area2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          }
          if (area1 == area2)
          {
              printf("Houve um empate!!!\n");
          };
          break;

        // PIB
        case 3:
          printf("Atributo: PIB\n");
          printf("Carta 01 %s: %.2f Km²\n", nomeCidade1, pib1);
          printf("Carta 02 %s: %.2f Km²\n", nomeCidade2, pib2);

          if (pib1 > pib2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (pib1 < pib2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          };
          if (pib1 == pib2)
          {
              printf("Houve um empate!!!\n");
          }
          break;

        // Pontos Turísticos
        case 4:
          printf("Atributo: Pontos Turísticos\n");
          printf("Carta 01 %s: %d pontos turísticos\n", nomeCidade1, pontosTuristicos1);
          printf("Carta 02 %s: %d pontos turísticos\n", nomeCidade2, pontosTuristicos2);

          if (pontosTuristicos1 > pontosTuristicos2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (pontosTuristicos1 < pontosTuristicos2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          }
          if (pontosTuristicos1 == pontosTuristicos2)
          {
              printf("Houve um empate!!!\n");
          };
          break;

        // Densidade Populacional
        case 5:
          printf("Atributo: Densidade Populacional\n");
          printf("Carta 01 %s: %.2f\n", nomeCidade1, densidade1);
          printf("Carta 02 %s: %.2f\n", nomeCidade2, densidade2);

          if (densidade1 < densidade2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (densidade1 > densidade2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          }
          if (densidade1 == densidade2)
          {
              printf("Houve um empate!!!\n");
          };
          break;

        // PIB Percapita
        case 6:
          printf("Atributo: PIB percapita\n");
          printf("Carta 01 %s: %.2f Km²\n", nomeCidade1, pibPerCapita1);
          printf("Carta 02 %s: %.2f Km²\n", nomeCidade2, pibPerCapita2);

          if (pibPerCapita1 > pibPerCapita2)
          {
              printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
              pontuacao1++;
          }
          if (pibPerCapita1 < pibPerCapita2)
          {
              printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
              pontuacao2++;
          };
          if (pibPerCapita1 == pibPerCapita2)
          {
              printf("Houve um empate!!!\n");
          }
          break;

          // Super Poder
        case 7:
            printf("Atributo: Super Poder\n");
            printf("Carta 01 %s: %.2lf Km²\n", nomeCidade1, pibPerCapita1);
            printf("Carta 02 %s: %.2lf Km²\n", nomeCidade2, pibPerCapita2);

            if (superpoder1 > superpoder2)
            {
                printf("Resultado: Carta 01 %s venceu!!! Parabéns!\n", nomeCidade1);
                pontuacao1++;
            }
            if (superpoder1 < superpoder2)
            {
                printf("Resultado: Carta 02 %s venceu!!! Parabéns\n", nomeCidade2);
                pontuacao2++;
            };
            if (superpoder1 == superpoder2)
            {
                printf("Houve um empate!!!\n");
            }
            break;

        // Opção Inválida
        default:
          printf("Opção inválida! Tente Novamente\n");
      };
   //   printf("\nPontuação Rodada 02\n");
   //   printf("Pontuação: Carta 01 %d\n", pontuacao1);
   //   printf("Pontuação: Carta 02 %d\n", pontuacao2);

      if (pontuacao1 > pontuacao2) {
            printf("\nCARTA 01 GANHOU A RODADA\n");
        }
        else if (pontuacao1 < pontuacao2) {
            printf("\nCARTA 02 GANHOU A RODADA\n");
        } else {
            printf("\nEMPATE!!!!!\n");
        }

    return 0;
    }
}
