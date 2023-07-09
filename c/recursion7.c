#include<stdio.h>
//Fabonacci and step problem is sanme

int step(int x){
    if(x<=1) return 1;
    if(x<=2) return 2;
    return step(x-1)+step(x-2);
}
int main(){
    int n;
    printf("total steps: ");
    scanf("%d",&n);
    printf("The no. of ways possible: %d ",step(n));
    return 0;
}