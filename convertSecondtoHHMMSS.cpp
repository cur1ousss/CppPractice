#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";
int time;
cin>>time;

int hour;
int min;
int sec;

hour=time/3600;
min=(time%3600)/60;
sec=((time%3600)%60);

cout<<"\n hours "<<hour;
cout<<"\n minutes "<<min;
cout<<"\n seconds "<<sec;

cout<<"\n\n";
    return 0;
}