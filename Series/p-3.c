//Problem code-9: Write a C program to find the sum of the series:
//5+10+15+.....+n

// Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=5;i<=n;i+=5)
    {
        sum = sum +i;
    }
    printf("%d",sum);
    return 0;
}

// Input 
// 10
// Output
// 15