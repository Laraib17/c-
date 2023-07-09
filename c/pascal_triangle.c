#include<stdio.h>
int facto(int x){
    int fact=1;
    for (int i = 2; i <=x; i++)
    {
        fact=fact*i;
    }
    return fact;
}
int combi(int n, int r){
    int comb=facto(n)/(facto(r)*facto(n-r));
    return comb;
} 
int main(){
    int x;
    printf("Enter no of lines:");
    scanf("%d",&x);
    for (int i = 0; i <=x; i++)
    {
        for (int j = 0; j <=i; j++)
        {
            for (int k = 0; k <=i; k+2)
            {
                printf(" ");
            }
            for (int l = 0; l <= i; l+3)
            {
                int y=combi(i,j);
                printf("%d ",y);
            }
            
        }
        printf("\n"); 
    }
    return 0;
    
}