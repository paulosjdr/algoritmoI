#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define OP_SAIR 6

int main()
{
    setlocale(LC_ALL,"");
    int opcao;
    float v1, v2, resultado;

    do{
        //Escrever o menu na tela
        system("cls"); // Limpar a tela do terminal
        printf("===CALCULADORA===\n\n");
        printf("1. SOMAR\n");
        printf("2. SUBTRAIR\n");
        printf("3. MULTIPLICAR\n");
        printf("4. DIVIDIR\n");
        printf("5. RAIZ QUADRADA\n");
        printf("%d. SAIR\n\n", OP_SAIR);
        printf("INFORME SUA OPÇÃO: ");
        scanf("%d", &opcao); // Faz a leitura da opção do usuário
/*
        if(opcao == 1){
            printf("Somando...");
        } else if (opcao == 2){
            printf("Subtraindo");
        } else if (opcao == 3){
            printf("Multiplicando");
        } else if (opcao == 4){
            printf("Dividindo");
        } else if (opcao == 5){
            printf("Calculando raiz quadrada");
        }
        system("pause");
*/
        switch(opcao){
            case 1:
                printf("INFORME O PRIMEIRO NÚMERO: ");
                scanf("%f", &v1);
                printf("INFORME O SEGUNDO NÚMERO: ");
                scanf("%f", &v2);
                resultado = v1 + v2;
                printf("%.2f + %.2f = %.2f\n", v1,v2,resultado);
                system("pause");
                break;
            case 2:
                printf("INFORME O PRIMEIRO NÚMERO: ");
                scanf("%f", &v1);
                printf("INFORME O SEGUNDO NÚMERO: ");
                scanf("%f", &v2);
                resultado = v1 - v2;
                printf("%.2f - %.2f = %.2f\n", v1,v2,resultado);
                system("pause");
                break;
            case 3:
                printf("INFORME O PRIMEIRO NÚMERO: ");
                scanf("%f", &v1);
                printf("INFORME O SEGUNDO NÚMERO: ");
                scanf("%f", &v2);
                resultado = v1 * v2;
                printf("%.2f * %.2f = %.2f\n", v1,v2,resultado);
                system("pause");
                break;
            case 4:
                printf("INFORME O PRIMEIRO NÚMERO: ");
                scanf("%f", &v1);
                printf("INFORME O SEGUNDO NÚMERO: ");
                scanf("%f", &v2);
                resultado = v1 / v2;
                printf("%.2f / %.2f = %.2f\n", v1,v2,resultado);
                system("pause");
                break;
            case 5:
                printf("INFORME UM NÚMERO: ");
                scanf("%f", &v1);
                resultado = sqrt (v1);
                printf("O RESULTADO É: %.2f\n", resultado);
                system("pause");
                break;

            default:
                if(opcao != OP_SAIR){
                    printf("OPÇÃO INVÁLIDA!!!");
                    system("pause");
                    break;
                }
        }


    }while(opcao != OP_SAIR);

    return 0;
}
