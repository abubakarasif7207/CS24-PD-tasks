#include<iostream>
using namespace std;
int main(){
string name ;
cout<<"enter the name of the person: ";
cin>>name;
float loss;
cout<<"enter the target weight loss in kilograms:  ";
cin>>loss;
float result;
result=loss*15;
cout<<name<<" will need " <<result<<" kg of weight by following the doctor's suggestions"<<endl;
string name2;
cout<<" enter the name of the person: ";
cin>>name2;
float loss2;
cout<<"enter the target weight loss in kilograms:  ";
cin>>loss2;
float result2;
result2=loss2*15;
cout<<name<<" will need " <<result2<<" kg of weight by following the doctor's suggestions"<<endl;
}