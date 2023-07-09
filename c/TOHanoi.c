#include<stdio.h>
void hanoi(int n,char s, char h, char d){
    if(n==0) return;
    hanoi(n-1,s,d,h); 
    printf("%c -> %c\n",s,d);
    hanoi(n-1,h,s,d);
    return; 
} 
int main(){
    int x;
    printf("Enter the number of disks: ");
    scanf("%d",&x);
    hanoi(x,'A','B','C'); 
    return 0;
}