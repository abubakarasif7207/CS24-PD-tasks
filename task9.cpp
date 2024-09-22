#include<iostream>
using namespace std;
main(){
int num;
cout<<"enter a 4-digit number :"; 
cin>>num;
int digit1=(num%10);
int digit2=(num/10)%10;
int digit3=(num/100)%10;
int digit4=(num/1000)%10;
int result=digit1+digit2+digit3+digit4;
cout<<"sum of the individual digits: " <<result;
}


