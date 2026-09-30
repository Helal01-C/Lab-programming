//Problem code-12: Write a C program to find the sum of the series:
// 2+4+6+.....+n

// Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=2;i<=n;i+=2)
    {
        sum = sum +i;
    }
    printf("%d",sum);
    return 0;
}

// Input 
// 10
// Output
// 30