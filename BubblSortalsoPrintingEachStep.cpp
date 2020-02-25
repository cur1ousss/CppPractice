#include<iostream>
using namespace std;
int main(){

// buuble sort only non negative intergers

int arr[6]={5,4,8,7,1,2};
int arr2[6]={7,-8,-4,2,6,1};

cout<<"\n \n array is ";
for(int i=0;i<6;i++){
    cout<<"\t"<<arr[i];
}

int swap=0;

for(int i=0;i<6;i++){

    for(int j=1;j<=6-i;j++){
        swap=arr[i];
        cout<<"\nintial arr["<<i<<"] is "<<arr[i];
        arr[i]=arr[i+1];
        cout<<"\tintial arr["<<i+1<<"] is "<<arr[i+1];
        arr[i+1]=swap;
        cout<<"\nfinal arr["<<i<<"] is "<<arr[i];
        cout<<"\tfinal arr["<<i+1<<"] is "<<arr[i+1];
        
        }

}



cout<<"\n \n sorted array is ";
for(int i=0;i<6;i++){
    cout<<"\t"<<arr[i];
}
cout<<"\n";

    return 0;
}