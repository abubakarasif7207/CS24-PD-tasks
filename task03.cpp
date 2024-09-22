#include<iostream>
using namespace std;
main(){
int initialvelocity;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initialvelocity;
int acceleration;
cout<<"Enter Acceleration (m/s^2):";
cin>>acceleration;
int time;
cout<<"Enter Time (s):";
cin>>time;
int finalvelocity;
finalvelocity=(acceleration*time)+initialvelocity;
cout<<"final velocity (m/s): "<<finalvelocity <<endl;
int initialvelocity2;
cout<<"Enter Initial Velocity (m/s): ";
cin>>initialvelocity2;
int acceleration2;
cout<<"Enter Acceleration (m/s^2):";
cin>>acceleration2;
int time2;
cout<<"Enter Time (s):";
cin>>time2;
int finalvelocity2;
finalvelocity2=(acceleration2*time2)+initialvelocity2;
cout<<"final velocity (m/s): "<<finalvelocity2<<endl;
}

