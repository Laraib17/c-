#include<stdio.h>
//decreasing
void first(int x){
    if (x==0) return;
    first(x-1);      // Here call is first
    printf("%d\n",x);// then print
    return;
}
//Increasing
void second(int x){
    if (x==0) return;
    printf("%d\n",x);//Here print is first
    second(x-1);     //then call
    return;
}
//Both function have same segments just position is changed.
//But one acts as decreasing and other becomes increasing.
int main(){
    int n;
    printf("Entert the number: ");
    scanf("%d",&n);
    first(n);
    printf("------------\n");
    second(n);
    return 0;
}
