#include<iostream>
using namespace std;

void line(){
    cout<<"\n\n*****************************************\n";
}
int main(){
    line();

int arr[5];
for(int i=1;i<=5;i++){
    cin>>arr[i];
}

cout<<"\npritning array";

for(int i=1;i<=5;i++){
    cout<<"\t"<<arr[i];
}
line();
    return 0;
}