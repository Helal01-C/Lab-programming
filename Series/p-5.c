//Problem code-11: Write a C program to find the sum of the series:
// 1^3+2^3+3^3+.....+n

// Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum +(i*i*i);
    }
    printf("%d",sum);
    return 0;
}

// Input 
// 5
// Output
// 255