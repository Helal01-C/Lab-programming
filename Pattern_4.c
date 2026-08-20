//Problem code -20 : Write a C program to print the following pattern:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

//Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
            }
        }
        printf("\n");
    }
    return 0;
}

// Input
// 5
// Output
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1