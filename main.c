#include <stdio.h>
#include <stdlib.h>


int main()
{
    int d, s;
    while(){

        printf("DIASTOLICA: ");
        scanf("%d", &d);
        printf("SISTOLICA: ");
        scanf("%d", &s);
        if(d<10) printf("PRESSAO BAIXA!\n");
        else if (d>14) printf("PRESSAO ALTA!\n");
        else if (s>9) printf("PRESSAO ALTA!\n");
        else if (s<6) printf("PRESSAO BAIXA\n");
        else if ((d>=14)&&(s>=9))printf("PRESSAO ALTA!\n");
        else if ((d<=10)&&(s>=6))printf("PRESSAO BAIXA!\n");
        else printf("PRESSAO NORMAL! :-D");

    }

    return 0;
}
