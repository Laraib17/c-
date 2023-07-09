#include<stdio.h>
void pip(int x){
    if(x==0) return ;
    printf("Pre %d\n",x);
    pip(x-1);
    printf("In %d\n",x);
    pip(x-1); 
    printf("Post %d\n",x); 
    return ;
}
int main(){
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    pip(n);
    return 0;
}