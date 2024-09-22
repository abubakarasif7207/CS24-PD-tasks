#include<iostream>
using namespace std;
main(){
float vegetableprice;
cout<<"enter vegetable price per kilogram (in coins): ";
cin>>vegetableprice;
float fruitprice;
cout<<"enter fruit price per kilogram (in coins): ";
cin>>fruitprice;
int vegetable;
cout<<"enter total kilogram of vegetables: ";
cin>>vegetable;
int fruit;
cout<<"enter total kilogram of fruits : ";
cin>>fruit;
float result;
result=(1/1.94)*(vegetableprice)*vegetable;
float result2;
result2=(1/1.94)*(fruitprice)*fruit;
cout<<"total earning in rupees (Rps): "<<result+result2;
}