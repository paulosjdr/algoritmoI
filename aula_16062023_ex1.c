#include <stdio.h>
#include <stdlib.h>

int main()
{
    float notas[5];
    float soma;

    //fazer a leitura das notas
    for(int i = 0; i < 5; i++){
        printf("DIGITE A NOTA %d DO ALUNO: ", i+1);
        scanf("%f", &notas[i]);


    }
    //fazer a soma das notas
    for(int i = 0; i < 5; i++){
        soma = soma + notas[i];

    }

    printf("NOTA TOTAL = %.2f", soma);

    return 0;
}
