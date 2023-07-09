#include<stdio.h>
int min(int x, int y){
    if (x<y)
    {
        return x;
    }
    else {
        return y;
    }
}
int main(){
    int n,m,gcd;
    printf("Enter the 1st and 2nd number respectively:");
    scanf("%d%d",&n,&m);
    for (int i = 2; i<=min(n,m); ++i)
    {
        if (n%i==0 && m%i==0)
        {
            gcd=i;
            
        }
    }
    printf("The gcd of %d and %d is %d",n,m,gcd);
    return 0;
}