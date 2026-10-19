#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "Russian");

    int A, B;

    printf("Введите номер задания первого робота: ");
    scanf("%d", &A);

    printf("Введите номер задания второго робота: ");
    scanf("%d", &B);

    if ((A % 2 == 0 && B % 2 != 0) ||
        (A % 2 != 0 && B % 2 == 0)) {
        printf("Роботы начинают работу одновременно.\n");
    }
    else 
    {
        printf("Роботы не начинают работу одновременно.\n");
    }

    return 0;
}
