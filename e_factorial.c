// Problem code -05:Write a C program to calculate the factorial of a number

//Source code -
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("%d ", fact);
    return 0;
}

// Input 
// 5
// Output
// 120