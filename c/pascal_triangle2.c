#include<stdio.h>

int main(){
    int x;
    printf("Enter no of lines:");
    scanf("%d",&x);
    for (int i = 0; i<=x; i++)
    {
        int start=1;
        for (int j = 0; j <=i; j++)
        {
            printf("%d ",start);
            start=start*(i-j)/(j+1);
        }
        printf("\n");
    }
    return 0;
}