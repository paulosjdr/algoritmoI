#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()
{
    setlocale(LC_ALL,"");

    int pular;

    printf("INFORME O NÚMERO: ");
    scanf("%d", &pular);

    for(int numero=0; numero<=10; numero++){
        if(numero%pular == 0)
            continue;

        printf("%d\n", numero);

    }

    return 0;
}
