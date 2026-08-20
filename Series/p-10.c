// Problem code-16: Write a C program to find the sum of the series:
// 1+1/2^2+1/3^2+1/4^2+.......+n
// Source code :
#include <stdio.h>

int main()
{
    int n;
    float sum = 1.0;

    scanf("%d", &n);
    for (int i = 2; i <= n; i++)
    {
        sum += 1.0 / (i * i);
    }
    printf("%.2f", sum);
    return 0;
}

// Input
// 5
// Output
// 1.46