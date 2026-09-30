//Problem code-13: Write a C program to find the sum of the series:
//7+9+13..........+n

// Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=7;i<=n;i+=2)
    {
        sum = sum +i;
    }
    printf("%d",sum);
    return 0;
}

// Input 
// 10
// Output
// 16