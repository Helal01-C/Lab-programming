//Problem code -24 : Write a C program to print the following pattern:
//     1 
//   1 2 1 
//  1 2 3 2 1 
// 1 2 3 4 3 2 1 

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
            printf("%d ",l);
        }
        for (int k = i-1; k >= 1; k--)
        {
            printf("%d ",k);
        }
        printf("\n");
        space--;
    }
    return 0;
}
// Input
// 4
// Output
//      1 
//    1 2 1 
//   1 2 3 2 1 
//  1 2 3 4 3 2 1