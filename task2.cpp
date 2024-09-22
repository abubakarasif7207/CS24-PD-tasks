#include<iostream>
using namespace std;
main(){
 int minutes;
cout<<" Number of minutes : ";
cin>>minutes;
int frames;
cout<<" Frames per second : ";
cin>>frames;
int result;
result=minutes * frames * 60;
cout<<"total number of frames:  "<<   result<<endl;
 int minutes2;
cout<<" Number of minutes : ";
cin>>minutes2;
int frames2;
cout<<" Frames per second : ";
cin>>frames2;
int result2;
result2=minutes2*frames2* 60;
cout<<"total number of frames:  "<<   result2;
}