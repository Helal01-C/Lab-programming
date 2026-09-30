//Problem code -18 : Write a C program to print the following pattern:
// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5

//Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}

// Input
// 5
// Output
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 