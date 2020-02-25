#include<iostream>
using namespace std;


void line(){
    cout<<"\n\n**********************************\n";
}
int main(){


int arr2[5]={5,7,8,2,1};

cout<<"\npriting array";

for(int i=0;i<5;i++){
    cout<<"\t"<<arr2[i];
    }
line();
cout<<"\n sorting single time";
int swap2=0;
for(int i=0;i<5;i++){
    if(arr2[i]<arr2[i+1]){
    swap2=arr2[i];
    arr2[i]=arr2[i+1];
    arr2[i+1]=swap2;
    }

}
line();


cout<<"\npriting array";

for(int i=0;i<5;i++){
    cout<<"\t"<<arr2[i];
    }
line();
    return 0;
}