#include<stdio.h>
// 1 to n
void inc(int x,int y){
    if (x==y+1) return ;
    printf("%d\n",x);
    inc(x+1,y);
    return;
}
int main(){
    int n,m;
    printf("Enter starting point: ");
    scanf("%d",&n);
    printf("Enter ending point: ");
    scanf("%d",&m);
    inc(n,m);
    return 0;
}