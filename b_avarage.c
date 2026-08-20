// Problem code -02 : Write a C program to find the avarage of N numbers.

// Source code :
#include <stdio.h>

int main()
{
    int n, i;
    float sum = 0, average;
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    average = sum / n;
    printf("The average numbers is: %.2f\n", average);
    return 0;
}

// Input
// 5
// Output
// The average numbers is: 3.00