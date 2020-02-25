#include<iostream>
using namespace std;
int main(){
int arr[7];
int x;

/// since C++ can intitalize garbaage values hence can initiaalize later array 
        // maybe null intitally???

cout<<"\npritnig array\n";

for(int x=0;x<7;x++){
    cout<<"\t"<<arr[x];
}
for(int i=0;i<7;i++){
   
cout<<"\nenter value elemensts\n";
    cin>>x;
    arr[i]=x;


}
cout<<"\npritnig array\n";

for(int x=0;x<7;x++){
    cout<<"\t"<<arr[x];
}
    return 0;
}