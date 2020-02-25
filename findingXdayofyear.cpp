#include<iostream>
using namespace std;
int main(){

int day;
cin>>day;

int date;
int month;

if(day<=60){

    month=day/30;
    date=day%30;

    cout<<"\n month "<<month;
    cout<<"\n date "<<date;
}







cout<<"\n\n";
    return 0;
}