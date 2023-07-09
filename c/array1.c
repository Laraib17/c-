#include<stdio.h>
int main(){
    int n;
    int arr[10]={0,1,2};
    arr[3]=3;
    arr[4]=4;
    arr[5]=5;
    for (int i = 6; i <=10; i++)
    {
        printf("Enter the element: ");
        scanf("%d",&arr[i]);
    }
    
    for (int i = 0; i <=6; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}