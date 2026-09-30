#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    for (int i = n; i >= index; i--)
    {
        a[i] = a[i - 1];
    }
    a[index] = value;
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

// reverse way
// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &a[i]);
//     }
    // int i=0;
    // int j=n-1;
    // while(i<j)
    // {
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    //     i++;
    //     j--;
    // }
    // for(int i=0;i<n;i++)
    //   printf("%d ",a[i]);
//     for(int j=(n-1);j>=0;j--)
//        printf("%d ",a[j]);
//     return 0;
// }
