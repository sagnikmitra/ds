#include <stdio.h>
int main()
{
    int numbers[5] = {}, i, j;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Number %d:", i + 1);
        scanf("%d", &numbers[i]);
    }
    int arr2[5], k = 0, k1 = 0;
    int flag = 0;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            flag = 0;
            if (i != j && numbers[i] == numbers[j])
            {
                for (k1 = 0; k1 < k; k1++)
                    if (arr2[k1] == numbers[j])
                        flag = 1;
                if (flag != 1)
                    arr2[k++] = numbers[j];
            }
        }
    }
    for (i = 0; i < k; i++)
        printf("Number %d has duplicate values\n", arr2[i]);
    return 0;
}