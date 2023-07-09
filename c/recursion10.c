#include<stdio.h>
int maze(int cr, int cc, int er, int ec){
    int rightways=0;
    int downways=0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){
       downways += maze(cr+1,cc,er,ec);
    }
    if(cc<er){
        rightways += maze(cr,cc+1,er,ec);
    }
    if(cr<ec){
        downways += maze(cr+1,cc,er,ec);
    }
    int totalways= rightways+downways;
    return totalways;
}
int main(){
    int n,m,x;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of column: ");
    scanf("%d",&m);
    x=maze(1,1,n,m);
    printf("Total possible combinations:%d ",x);
    return 0;
}