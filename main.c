#include <stdio.h>
#include"max.h"
#include"min.h"
#include"diff.h"
#include"sum.h"

#define MAX_ARR_SIZE 100

void input_data(int* arr, int* arr_size, int* operation_number);
void print_result(int* arr, int arr_size, int operation_number);


int main()
{
    int array[MAX_ARR_SIZE];
    int array_size = 0;
    int operation_number;

    input_data(array, &array_size, &operation_number);
    print_result(array, array_size, operation_number);

}



void input_data(int* arr, int* arr_size, int* operation_number)
{
    scanf_s("%d", operation_number);

    while (getchar() != '\n')
    {
        scanf_s("%d", &arr[(*arr_size)++]);
    }
}




void print_result(int* arr, int arr_size, int operation_number)
{
    switch (operation_number)
    {
    case 0: printf("%d", max(arr, arr_size));
        break;
    case 1: printf("%d", min(arr, arr_size));
        break;
    case 2: printf("%d", diff(arr, arr_size));
        break;
    case 3: printf("%d", sum(arr, arr_size));
        break;
    default:printf("������ �����������");

    }
    return 0;
}
