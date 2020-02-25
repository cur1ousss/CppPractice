#include<iostream>
using namespace std;

//concat or joining 2 arrays
void line(){
    cout<<"\n***************************************************\n";
}
int main(){

    //concat or join 2 arrays can be differnet size
    line();
int arr1[5]={2,4,5,2,0};
int arr2[7]={34,2,1,7,9,2,1};

int arr3[12];
for(int i=0;i<12;i++){
    
    if(i<5){
    arr3[i]=arr1[i];
    }
    else if (i>=5){
        arr3[i]=arr2[i-5];
    } 
    cout<<"\t"<<arr3[i];
}
line();

    return 0;
}