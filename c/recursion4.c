#include<stdio.h>
void sum(int y, int s){
    if (y==0) return;
    s=s+y;
    printf("The total sum is: ",y);
    return sum(y-1);
}
int main(){
    int n;
    printf("Entert the number: ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}
 