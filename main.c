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
    printf("N�MERO = %d\n", numAleatorio);

    do {
        chute = rand()%6;
        tentativas++;
        printf("TENTATIVA: %d -> CHUTE = %d\n\n", tentativas,chute);

        if(chute == numAleatorio){
            printf("PARAB�NS, VOC� ACERTOU!!!\n");
            break;

        }
        else
            printf("VOC� ERROU! TENTE NOVAMENTE!\n");
    } while(tentativas < QUANTIDADE_TENTATIVAS);

    if(tentativas>=QUANTIDADE_TENTATIVAS)
        printf("VOC� PERDEU!");


    return 0;
}
