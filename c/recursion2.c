#include<stdio.h>
//n to 1
void dec(int x){
    if (x==0) return ;
    printf("%d\n",x);
    dec(x-1);
    return; 
}
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    dec(n);
    return 0;
}