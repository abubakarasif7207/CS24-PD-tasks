#include<iostream>
using namespace std;
main(){
int paint;
cout<<"number of square meters you can paint: ";
cin>>paint;
int width;
cout<<"Width of the single wall (in meters): ";
cin>>width;
int height;
cout<<"Height of the single wall: ";
cin>>height;
int result=paint/(width*height);
cout<<"Numbers of wall you can paint: "<<result<<endl;
int paint2;
cout<<"number of square meters you can paint: ";
cin>>paint2;
int width2;
cout<<"Width of the single wall (in meters): ";
cin>>width2;
int height2;
cout<<"Height of the single wall: ";
cin>>height2;
int result2=paint2/(width2*height2);
cout<<"Numbers of wall you can paint: "<<result2<<endl;
int paint3;
cout<<"number of square meters you can paint: ";
cin>>paint3;
int width3;
cout<<"Width of the single wall (in meters): ";
cin>>width3;
int height3;
cout<<"Height of the single wall: ";
cin>>height3;
int result3=paint3/(width3*height3);
cout<<"Numbers of wall you can paint: "<<result3<<endl;
}
