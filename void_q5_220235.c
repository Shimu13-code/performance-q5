#include <stdio.h>

void print_array(int arr[], int n);

int main(void)
{
    int my_numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    print_array(my_numbers, size);
}

void print_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}
