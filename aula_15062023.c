//Somar a idade de 5 pessoas e efetuar a média.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");

    float I1, I2, I3, I4, I5;
    float MDI;

    printf("INFORME A IDADE DA PESSOA:\n");
    printf("Pessoa 1: ");
    scanf("%f", &I1);
    printf("Pessoa 2: ");
    scanf("%f", &I2);
    printf("Pessoa 3: ");
    scanf("%f", &I3);
    printf("Pessoa 4: ");
    scanf("%f", &I4);
    printf("Pessoa 5: ");
    scanf("%f", &I5);

    MDI = (I1 + I2 + I3 + I4 + I5) / 5;

    printf("Média obtida: %.2f\n", MDI);


    return 0;
}
