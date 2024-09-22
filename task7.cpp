#include<iostream>
using namespace std;
main(){
string moviename;
cout<<"enter the movie name; ";
cin>>moviename;
int adult;
cout<<"enter the adult ticket price: $";
cin>>adult;
int child;
cout<<"enter the child ticket price : $";
cin>>child;
int adultsale;
cout<<"enter the number of adult tickets sold: ";
cin>>adultsale;
int childsale;
cout<<"enter the number of child tickets sold: ";
cin>>childsale;
int percentage;
cout<<"enter the percentage of the amount to be donated to charity : ";
cin>>percentage;

string name;
cout<<"Movie: ";
cin>>name;
int result;
result=(adult*adultsale)+(child*childsale);
cout<<"total amount generated from ticket sales: $"<<result<<endl;
int result2;
result2=result/10;
cout<<"Donation to charity (10%): $"<<result2<<endl;
int result3;
result3=result-result2;
cout<<"Remaining amount after donation : $"<<result3;
}