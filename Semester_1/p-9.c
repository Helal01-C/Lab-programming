// Problem code-15: Write a C program to find the sum of the series:
// 2.1+2.2+3.3+..........+n

// Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    float sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + 2 + (i / 10.0);
    }
    printf("%0.2f", sum);
    return 0;
}

// Input
// 5
// Output
// 11.50