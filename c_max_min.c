//Problem code-03 : Write a C program to find the max and min N numbers.

//Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int num, max, min;
    scanf("%d", &num);
    max = num;
    min = num;
    for (int i = 2; i <= n; i++)
    {
        scanf("%d", &num);

        if (num > max)
        {
            max = num;
        }

        if (num < min)
        {
            min = num;
        }
    }
    printf("Max = %d\n", max);
    printf("Min = %d\n", min);

    return 0;
}

// Input
// 5
// 13 4 56 12 5
// Output
// Max = 56
// Min = 4