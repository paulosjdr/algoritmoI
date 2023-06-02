#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

#define NUMERO_MAXIMO 6
#define QUANTIDADE_TENTATIVAS 5

int main()
{
    int numAleatorio, chute;
    int tentativas = 0;

    setlocale(LC_ALL,"");

    srand((unsigned)time(NULL));
    numAleatorio = rand()%NUMERO_MAXIMO;
    printf("NÚMERO = %d\n", numAleatorio);

    do {
        chute = rand()%6;
        tentativas++;
        printf("TENTATIVA: %d -> CHUTE = %d\n\n", tentativas,chute);

        if(chute == numAleatorio){
            printf("PARABÉNS, VOCÊ ACERTOU!!!\n");
            break;

        }
        else
            printf("VOCÊ ERROU! TENTE NOVAMENTE!\n");
    } while(tentativas < QUANTIDADE_TENTATIVAS);

    if(tentativas>=QUANTIDADE_TENTATIVAS)
        printf("VOCÊ PERDEU!");


    return 0;
}
