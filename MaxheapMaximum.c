#include <stdio.h>

void insert(int heap[], int *n, int value)
{
    int i = *n;
    heap[i] = value;
    (*n)++;

    while (i > 0 && heap[(i - 1) / 2] < heap[i])
    {
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;

        i = (i - 1) / 2;
    }
}

int main()
{
    int scores[] = {78, 92, 65, 88, 95, 72, 84, 90};
    int heap[20];
    int n = 0;

    for (int i = 0; i < 8; i++)
        insert(heap, &n, scores[i]);

    printf("Highest Score = %d\n", heap[0]);

    return 0;
}