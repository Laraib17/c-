#include<stdio.h>
int powe(int x,int y){
    if(y==0) return 1;
    return x*powe(x,y-1);
}
int main(){
    int n,m;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Raised to power: ");
    scanf("%d",&m);
    
    printf("%d raised tom %d gives %d",n,m,powe(n,m));
    return 0;
}