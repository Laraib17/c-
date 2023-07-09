#include<stdio.h>
// Permutation and combination 
int factorial(int x){
    int fact=1;
    for (int i = 2; i <=x; i++)
    {
        fact=fact*i;
    }
    return fact;    
}
int main(){
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    int r;
    printf("Enter the value of r");
    scanf("%d",&r);
    int facto1=factorial(n);
    int facto2=factorial(r);
    int facto3=factorial(n-r);
    int combi=facto1/(facto2*facto3);
    printf("total combination %d",combi);
    
    
}

