//Problem code -21 : Write a C program to print the following pattern:
//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

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
            printf("  ");
        }
        for (int k = i; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
        space--;
    }
    return 0;
}

// Input
// 5
// Output
//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1