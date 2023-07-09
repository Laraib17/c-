#include<stdio.h>
// div 6 rule
int div2(int x){
    if (x%2==0){
        printf("Divisible by 2  ");
    }
    else{
        printf("Not divisible by 2 ");
    }
}
int div3(int y){
    if(y%3==0){
        printf("Divisible by 3  ");
    }
    else{
        printf("Not divisible by 3");
    }
}
int div6(int z){
    if(div2(z)!=0 && div3(z)!=0){
        printf("dvisible by 6 ");
    }
    else{
        printf("Not divisible by 6");
    }
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    div2(n);
    div3(n);
    div6(n);
    return 0;
}
