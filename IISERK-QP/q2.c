#include <stdio.h>
int getSmallest(int arr[], int start)
{
    int location = start;
    for (int j = start; j < 5; j++)
    {
        if (arr[j] < arr[location])
            location = j;
    }
    return location;
}
void swap(int a, int b)
{
    int temp = 0;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Array Element %d", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d. ", i + 1);
        int a = arr[getSmallest(arr, i)];
        arr[getSmallest(arr, i)] = arr[i];
        arr[i] = a;
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", arr[j]);
        }
        printf("\n");
    }
    return 0;
}