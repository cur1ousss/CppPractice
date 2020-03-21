#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int arr[5];
cout<<"\n ENter elemenets of array";
for(int i=0;i<5;i++)
    cin>>arr[i];
cout<<"\n The input array is ";
for(int i=0;i<5;i++)
    cout<<"\t"<<arr[i];

int flag=0; 
for(int i=0;i<5;i++){
        for(int j=1;j<arr[i];j++){
            if(j!=1 && arr[i]%j==0){
                flag=0;
                break;
            }
            else{
                flag=1;
           }
        }
    if(flag==1)
            cout<<"\n is prime  "<<arr[i];
        
}
cout<<"\n\n";
return 0;
}