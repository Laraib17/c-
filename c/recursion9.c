#include<stdio.h>
//Optimesd form to caluculte power will less steps.
int powlog(int x, int y){
    if(y==0) return x;
// Now need to create even and odd case because "y/2" if y is odd will give float and int will take 1 lesss the the value i.e 3/2=1.5 -> 1. 
    if (y%2==0)
    {
        return powlog(x,y/2)*powlog(x,y/2);
    }
// for odd case will multiply by that number itself.
    else{
        return x*powlog(x,y/2)*powlog(x,y/2);
    } 
    
}
int main(){
    int n,m;
    printf("Enter base: ");
    scanf("%d",&n);
    printf("Raised to: ");
    scanf("%d",&m);
    printf("%d raised to power %d gives: %d ",n,m,powlog(n,m));
    return 0;
}