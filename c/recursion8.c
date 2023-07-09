#include<stdio.h>
//Fabonacci and step problem is sanme
// with different step
int step(int x){
    
    if(x<=1) return 1;
    if(x<=2) return 2;
    if(x<=3) return 3;
    
    return step(x-1)+step(x-2)+step(x-3);
}
int main(){
    int n;
    printf("total steps: ");
    scanf("%d",&n);
    printf("The no. of ways possible: %d ",step(n));
    return 0;
}