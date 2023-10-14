#include<stdio.h>
#include"print_result.h"
#include"max.h"
#include"min.h"
#include"diff.h"
#include"sum.h"

void print_result(int* arr, int arr_size, int operation_number)
{
    switch (operation_number)
    {
    case 0: printf("%d\n", max(arr, arr_size));
        break;
    case 1: printf("%d\n", min(arr, arr_size));
        break;
    case 2: printf("%d\n", diff(arr, arr_size));
        break;
    case 3: printf("%d\n", sum(arr, arr_size));
        break;
    default:printf("%s\n","Данные некорректны");

    }

}