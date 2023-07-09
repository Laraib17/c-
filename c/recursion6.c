#include<stdio.h>
int  fbnc(int x){
    //if(x==1 || x==2) return 1;
    // int p1=fbnc(x-1);
    // int p2=fbnc(x-2);
    // int ans=p1+p1; 
    // return ans;
    //          OR
    if (x==1 || x==2) return 1;
    return fbnc(x-1)+fbnc(x-2);
}
int main(){
    int n; 
    printf("Enter the position : ");
    scanf("%d",&n);
    printf("Fibonacci series : %d",fbnc(n));
    return 0;
}