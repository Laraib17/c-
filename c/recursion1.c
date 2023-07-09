#include<stdio.h>
// Factorial using recursion
int facto(int x){
    if (x==1) return 1;
    return x*facto(x-1);
}
int main(){
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    int ans=facto(a);
    printf("Factorial of %d is %d",a,ans);
    return 0;
}