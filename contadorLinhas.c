#include <stdio.h>
#include <stdlib.h>


int main()
{
    /*
    i = 0     (Inicialização da variável)
    i < linhas(Contador das linhas)
    i++       (Variável + 1)
    */

    int linhas;
    printf("INFORME A QUANTIDADE DE LINHAS: ");
    scanf("%d", &linhas);
    for(int i = 1; i<=linhas ; i++){ //contador
        for(int j = 1; j < i; j++){ //contador
            if(j%2!=0)
                printf("*"); //repetindo o nr da linha
            else
                printf("%d",j);
        }
        if(i%2!=0)
            printf("*\n");
        else
            printf("%d\n",i);

    }

    return 0;
}
