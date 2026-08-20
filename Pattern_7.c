//Problem code -23 : Write a C program to print the following pattern:
//     A 
//   A B A 
//  A B C B A 
// A B C D C B A 

//Source code :
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("%c ", 64 + l);
        }
        for (int k = i-1; k >= 1; k--)
        {
            printf("%c ", 64 + k);
        }
        printf("\n");
        space--;
    }
    return 0;
}
// Input
// 4
// Output
//     A 
//   A B A 
//  A B C B A 
// A B C D C B A 