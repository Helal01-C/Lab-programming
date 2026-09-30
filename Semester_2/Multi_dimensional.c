#include <stdio.h>

int main()
{
    int n,r,c;
    scanf("%d %d %d",&n,&r,&c);
    int a[n][r][c];
    for(int i=0;i<n;i++){
    for(int j=0;j<r;j++){
        for(int k=0;k<c;k++){
            scanf("%d",&a[i][j][k]);
        }
    }
}
    for(int i=0;i<n;i++){
        printf("Layer %d:\n",i);
        for(int j=0;j<r;j++){
            for(int k=0;k<c;k++){
                printf("%d ",a[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}