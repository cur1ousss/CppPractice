#include<iostream>
using namespace std;
int main(){

// storing between any two numbers 
cout<<"\n\n pritnng tabnle from 40 to 100\n";
int x=0;
int tmparr[13];
for(int i=8;i<=20,x<13;i++){
    tmparr[x]=5*i;
    x++;
}
cout<<"\n\n pritimimg Tmparr\n";
for(int i=0;i<13;i++){
cout<<"\t"<<tmparr[i];
}


// storing from  starting 
int arr[10];

for(int i=1;i<=10;i++){
    arr[i-1]=5*i;
}
cout<<"\n\n priting tabel of 5\n";
for(int i=0;i<10;i++){
    cout<<"\t "<<arr[i];
}
cout<<"\n\n";
    return 0;
}