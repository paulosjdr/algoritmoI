//Somar a idade de 5 pessoas e efetuar a média.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define QUANTIDADE_PESSOAS 10

int main()
{
    setlocale(LC_ALL, "");

    int idade[QUANTIDADE_PESSOAS];
    float MDI;

    for(int i = 0; i < 10; i++){
            printf("INFORME A IDADE DA PESSOA %d: ",i+1);
            scanf("%d", &idade[i]);
    }

    MDI = 0.0;
    for(int i = 0; i < QUANTIDADE_PESSOAS; i++){
            MDI = MDI + idade[i];
    }

    MDI = MDI/QUANTIDADE_PESSOAS;
    printf("Média obtida: %.2f", MDI);


    return 0;
}
