#include "Header.h"
#include <stdio.h>

void checkuser()
{
    int N;
    printf("С компьютером есть какие-либо проблемы? \n1.Да \n2.Нет\n");
    do
    {
        scanf_s("%d",&N);
        switch (N)
        {
        case 1: break;
        case 2: return;
        default: printf("Некорректный ввод! \n");
        }
    } while (N!=1 && N!=2);
}

