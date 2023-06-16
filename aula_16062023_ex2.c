#include <stdio.h>
#include <stdlib.h>

#define QTDE_NOTAS 5

int main()
{
    float notas[QTDE_NOTAS];
    float soma = 0;

    //fazer a leitura das notas dos alunos
    for(int i = 0; i < QTDE_NOTAS; i++){
        printf("DIGITE A NOTA %d DO ALUNO: ", i+1);
        scanf("%f", &notas[i]);

    }

    //fazer a soma das notas
    for(int i = 0; i < QTDE_NOTAS; i++){
        soma = soma + notas[i];

    }

    printf("NOTA TOTAL = %.2f", soma);

    return 0;
}
