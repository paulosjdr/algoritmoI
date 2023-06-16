//Somar a idade de 5 pessoas e efetuar a média.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    int qtde;
    float MDI;

    printf("INFORME A QUANTIDADE DE PESSOAS: ");
    scanf("%d", &qtde);
    int idade[qtde];

    for(int i = 0; i < qtde; i++){
            printf("INFORME A IDADE DA PESSOA %d: ",i+1);
            scanf("%d", &idade[i]);
    }

    MDI = 0.0;
    for(int i = 0; i < qtde; i++){
            MDI = MDI + idade[i];
    }

    MDI = MDI/qtde;
    printf("Média obtida: %.2f", MDI);


    return 0;
}
