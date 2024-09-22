#include<iostream>
using namespace std;
main(){
int size;
cout<<"enter the size of the fertilizer bag in pounds : ";
cin>>size;
int cost;
cout<<"enter the cost of the bag: $";
cin>>cost;
int result;
result=cost/size;
cout<<"cost of fertilizer per pound: $"<<result<<endl;
int area;
cout<<"enter the area in square feet that can be converted by the bag:  ";
cin>>area;
int result2;
result2=cost/area;
cout<<"cost of fertilizing per square foot: $"<<result2;
}