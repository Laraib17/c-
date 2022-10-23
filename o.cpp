/*1.addition: num1+num2
  2.subtraction: num1-num2
  3.multiplication: num1(*num2)
  4.division: num1/num2
  5.modulus:(gives remainder)useed to find if no. is even or odd, num1%num2
  6.increment: increase by 1 a=3,a++=4 
  7.decreament: decrease the no. by 1 a=3,a--=2*/
#include<iostream>
using namespace std;

int main (){
    int num1=5;
    int num2=6;

    cout<<num1+num2<<endl;
    cout<<num1-num2<<endl;
    cout<<num1/num2<<endl;
    cout<<num1*num2<<endl;
    cout<<num1%num2<<endl;
    cout<<num1++<<endl;
    cout<<num2--<<endl;
    return 0;
}