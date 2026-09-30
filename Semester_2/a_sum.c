// Problem code -01 : Write a C program to find the sum of the first N natural numbers.

// Source Code :

#include <stdio.h>

int main()
{
    int N, sum = 0;
    scanf("%d", &N);
    for (int i = 1; i <= N; i++)
    {
        sum = sum + i;
    }
    printf("The sum is %d\n", sum);
    return 0;
}

// Input
// 5
// Output
// The sum is 15