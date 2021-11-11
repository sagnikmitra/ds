#include <stdio.h>
#include <string.h>
int main()
{

    int judge1RankArray[6] = {};
    int judge2RankArray[6] = {};
    int judge3RankArray[6] = {};
    int i = 0;
    int j = 0;
    //Name of contestants
    char *nameArray[6][10];
    for (i = 0; i < 6; i++)
    {
        printf("Enter the name of the contestant %d:", i + 1);
        scanf("%s", &nameArray[i]);
    }
    printf("%s", nameArray[i]);
    printf("Name Table:");
    for (i = 0; i < 6; i++)
    {
        printf("%d: %s\n", i + 1, nameArray[i]);
    }
    int nameSlArray[6] = {1, 2, 3, 4, 5, 6};

    printf("Enter the Rank List of Judge 1\n");
    for (i = 0; i < 6; i++)
    {
        printf("Enter the Position %d of the Rank List", i + 1);
        scanf("%d", &judge1RankArray[i]);
    }

    printf("Enter the Rank List of Judge 2");
    for (i = 0; i < 6; i++)
    {
        printf("Enter the Position %d of the Rank List", i + 1);
        scanf("%d", &judge2RankArray[i]);
    }

    printf("Enter the Rank List of Judge 3");
    for (i = 0; i < 6; i++)
    {
        printf("Enter the Position %d of the Rank List", i + 1);
        scanf("%d", &judge3RankArray[i]);
    }
    float marksArray[6] = {0, 0, 0, 0, 0, 0};
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (judge1RankArray[i] == nameSlArray[j])
            {
                marksArray[j] += 1.0 / (i + 1.0);
            }
            if (judge2RankArray[i] == nameSlArray[j])
            {
                marksArray[j] += 1.0 / (i + 1.0);
            }
            if (judge3RankArray[i] == nameSlArray[j])
            {
                marksArray[j] += 1.0 / (i + 1.0);
            }
        }
    }
    int locationW = 0;
    for (int j = 0; j < 6; j++)
    {
        if (marksArray[i] > marksArray[locationW])
            locationW = j;
    }
    marksArray[locationW] = 0;
    int location1R = 0;
    for (int j = 0; j < 6; j++)
    {
        if (marksArray[i] > marksArray[location1R])
            location1R = j;
    }
    marksArray[location1R] = 0;
    int location2R = 0;
    for (int j = 0; j < 6; j++)
    {
        if (marksArray[i] > marksArray[location2R])
            location2R = j;
    }
    marksArray[location2R] = 0;
    printf("Second RunnerUp: %s\n", nameArray[location2R]);
    printf("First RunnerUp: %s\n", nameArray[location1R]);
    printf("Winner: %s\n", nameArray[locationW]);
    return 0;
}