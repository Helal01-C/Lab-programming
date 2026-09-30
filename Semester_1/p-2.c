//Problem code-8: Write a C program to find the sum of the series:
//1+3+5+......+n
//Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int sum = 0;
    for(int i=1;i<=n;i+=2)
    {
        sum+=i;
    }
    printf("%d",sum);
    return 0;
}
// Input 
// 10
// Output
// 25