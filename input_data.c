#include<stdio.h>
#include"input_data.h"
void input_data(int* arr, int* arr_size, int* operation_number)
{
    scanf_s("%d", operation_number);
    while (getchar() != '\n')
    {
        scanf_s("%d", &arr[(*arr_size)++]);
    }
    
}
