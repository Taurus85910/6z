#include"min.h"
int min(int arr[], int arr_size)
{
    int current_min_element = 100000;
    int i;

    for (i = 0; i < arr_size; i++)
    {

        if (current_min_element > arr[i])
        {
            current_min_element = arr[i];
        }
    }
    return current_min_element;
}