#include <stdio.h>
#include <stdlib.h>

#define QTDE_NOTAS 2
#define QTDE_ALUNOS 2

int main()
{
    float notas[QTDE_ALUNOS][QTDE_NOTAS];
    float soma[QTDE_ALUNOS] = {0};

    //fazer a leitura das notas dos alunos
    for(int i = 0; i < QTDE_ALUNOS; i++){
        printf("DIGITE A NOTA DO ALUNO %d: \n", i+1);
        for(int j = 0; j < QTDE_NOTAS; j++){
                printf("DIGITE A NOTA %d DO ALUNO: ",j+1);
                scanf("%f", &notas[i][j]);

        }
    }
    //fazer a soma
    for(int i = 0; i < QTDE_ALUNOS; i++){
        for(int j = 0; j < QTDE_NOTAS; j++){
            soma[i] = soma[i] + notas[i][j];

        }

    }
    //imprimir o resultado
    for(int i = 0; i < QTDE_ALUNOS; i++){
        printf("ALUNO %d -> NOTA: %.2f\n", i+1,soma[i]);
    /*    if(soma[i] >=6){
            printf(" - APROVADO\n");
        } else{
            printf(" - REPROVADO\n");
        }
    */

    soma[i] >=6 ? printf(" - APROVADO\n") : printf(" - REPROVADO\n");


    }


    return 0;
}
