#include<stdio.h>
// Min and Max 
int min(int x,int y){
    if (x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else{
        printf("%d is greater than %d",y,x);
    }
    return 0;
}
int main(){
    int a,b;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    min(a,b);
    return 0;
}