#include<iostream>
using namespace std;
int main(){
    
    int arr[6]={1,2,1,2,2,3};

cout<<"\n PRinting array ";
for(int i=0;i<6;i++)
    cout<<"\t"<<arr[i];

    cout<<"\n\n";
for(int i=0;i<6;i++){
            int occCount=0;
    for(int k=0;k<6;k++){
        if(arr[i]!=0 && arr[k]!=0 && arr[i]==arr[k]){
            // cout<<"\n Multiple Ocurrence of "<<arr[i];
            occCount++;
            if(i!=k)
                arr[k]=0;       //setting to 0 to avoid count again that term which counted earlier since in loop again find same from another index
        }
    }
    if(arr[i]!=0)  
        cout<<"\n Occurenece Count of arr[i] "<<arr[i]<<" is "<<occCount;
}

cout<<"\n\n";
    return 0;
}