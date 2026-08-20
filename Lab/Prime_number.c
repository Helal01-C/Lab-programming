#include <stdio.h>

int main()
{
     int n;
     scanf("%d",&n);
     int flag =0;
     if (n<= 1)
     {
        flag = 1;
     }
     for (int i = 2; i < n; i++)
     { 
      if (n % i ==0)
      {
         flag =1;
         break;
      }
     }
     if (flag ==0)
     {
      printf("prime");
     }
     else
     {
      printf("not prime");
     }
    return 0;
}
