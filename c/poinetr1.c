#include<stdio.h>
int main(){
    char* a;
    char b;
    b=&a;
    
    printf("enter a charcter: ");
    printf("the value of a is %c and the value of b is %c",a,b);
    return 0;
}