// Problem code-7:Write a C program to find the sum of the series:
// 1+2+3+4+⋯+n

// Source code:
#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
    sum = sum + i;
    }
    printf("%d",sum);
    return 0;
}

// Input
// 50
// Output
// 1275