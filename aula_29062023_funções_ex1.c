#include <stdio.h>

int R;

void SOMA()
{
    int A, B;

    printf("DIGITE O VALOR DE A: ");
    scanf("%d", &A);

    printf("DIGITE O VALOR DE B: ");
    scanf("%d", &B);

    R = A+B;
    //printf("A + B = %d",R);

}

int main()
{
   printf("INICIO\n");

   SOMA();

   printf("RESULTADO = %d", R);


    return 0;
}

