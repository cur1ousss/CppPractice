#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int arr[5];
cout<<"\n enter elememnts of array ";
for(int i=0;i<5;i++)
    cin>>arr[i];
cout<<"\n Printing array ";
 for(int i=0;i<5;i++)
        cout<<"\t"<<arr[i];

int num=0;
int x=1;
for(int i=0;i<5;i++){
    num=num+arr[i]*x;
    x*=10;
}


cout<<"\n The nUmber is "<<num;


cout<<"\n\n";
return 0;
}