#include <stdio.h>
void bubble_short(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];

                arr[j + 1] = temp;
            }
        }
    }
}

void print_arry(int arry[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d\n", arry[i]);
    }
    //printf("\n");
}
int main()
{
    int arry[] = {2, 5, 9, 4, 7, 6, 3};
    int len = sizeof(arry) / sizeof(arry[0]);
    bubble_short(arry, len);
    print_arry(arry, len);
    return 0;
}