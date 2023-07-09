#include <stdio.h> //Maze less codes
int maze2(int er,int ec){
    int rightways = 0;
    int downways = 0;
    if (er==1 && ec==1) return 1;
    if (er==1){
        rightways += maze2(er,ec-1);
    }
    if (ec==1){
        downways += maze2(er-1, ec);
    }
    if (er>1 && ec>1){
        rightways += maze2(er,ec-1);
        downways += maze2(er-1,ec);
    }
    int totalways = rightways + downways;
    return totalways;
}
int main()
{
    int n, m, x;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    printf("Enter the number of column: ");
    scanf("%d", &m);
    x=maze2(n,m);
    printf("Total possible combinations: %d",x);
    return 0;
}