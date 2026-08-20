//Problem code -22 : Write a C program to print the following pattern:
//     *
//    * *
//   *   *
//  *     *
// * * * * * 

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
        if (i == n)
        {
            for (int t = 1; t <= n; t++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 1; j <= 2 * i - 1; j++)
            {
                if (i == 1 || j == 1 || j == 2 * i - 1)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
        space--;
    }
    return 0;
}
// Input
// 5
// Output
//     *
//    * *
//   *   *
//  *     *
// * * * * * 