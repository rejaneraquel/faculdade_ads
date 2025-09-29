#include <stdio.h>

//Externo cima - Interno Baixo
void moverBispo(int casas) {
    if (casas > 0)
    {
        for (int i = 0; i < 1; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        moverBispo(casas - 1);
    }
}

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorre(casas - 1);
        }
}

void moverRainha(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

void moverCavalo(int casas) {
    if(casas > 0) {
        for (int i = 0; i < 2; i++)
        {
            printf("Cima\n");
        }
        printf("Direita\n");
        moverCavalo(casas - 1);
    }
}


int main() {
    int bispo, torre, rainha, cavalo, escolha;

    printf("Seja Bem Vindo\n");
    printf("Digite o número da peça que quer mover\n");
    printf("1.Bispo\n");
    printf("2.Torre\n");
    printf("3.Rainha\n");
    printf("4.Cavalo\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        printf("##Bispo##\n");
        printf("Digite quantas casas quer andar\n");
        scanf("%d", &bispo);
        moverBispo(bispo);
        break;

    case 2: 
        printf("##Torre##\n");
        printf("Digite quantas casas quer andar\n");
        scanf("%d", &torre);
        moverTorre(torre);
        break;

    case 3: 
        printf("\n##Rainha##\n");
        printf("Digite quantas casas quer andar\n");
        scanf("%d", &rainha);
        moverRainha(rainha);
        break;

    case 4:
        printf("\n");
        printf("##Cavalo##\n");
        printf("Digite quantas casas quer andar\n");
        scanf("%d", &cavalo);
        moverCavalo(cavalo);
        break;

    default:
        printf("Opção inválida\n");
        break;
    }
    return 0;
}
