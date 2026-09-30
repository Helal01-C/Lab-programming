//Problem code -19 : Write a C program to print the following pattern:
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 

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
            printf("%c ", 64 + j);
        }
        printf("\n");
    }
    return 0;
}

// Input
// 5
// Output
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 