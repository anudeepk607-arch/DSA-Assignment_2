#include <stdio.h>

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int n = 8;
    int max = scores[0];
    int comparisons = 0;

    for (int i = 1; i < n; i++)
    {
        comparisons++;

        if (scores[i] > max)
            max = scores[i];
    }

    printf("Highest Score = %d\n", max);
    printf("Number of Comparisons = %d\n", comparisons);

    return 0;
}