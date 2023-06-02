#include <stdio.h>
#include <stdlib.h>

int main()
{
   int valor, resultado;
   int contador = 1;

   while(contador++ <= 5){
    printf("INFORME UM VALOR:  ");
    scanf("%d", &valor);
    resultado = valor*3;
    printf("%d x 3 = %d\n",valor, resultado);
    //contador++; //contador+=1; //contador = contador +1

   }
   return 0;
}
