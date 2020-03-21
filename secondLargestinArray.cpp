#include<iostream>
using namespace std;

// Options >> sort then find last second index elemnet
        // >> find largest then find second largest
        // >> set largest in arr[i]=0 then != 0 comparsion to find second largest

//?? Using only one loop    ??


/*   l********************************************************************
>>        Below Code Works but Edge Case fails on multiple ocuurences of largest

int arr[5]={2,23,54,1,37};

cout<<"\n Printing array ";
for(int i=0;i<5;i++)
    cout<<"\t"<<arr[i];

int largest=arr[0];
int secondLargest=0;        

int largestIndex=0;
for(int i=0;i<5;i++){
    if(arr[i]>largest){
        largest=arr[i];
        largestIndex=i;
    }   
}
int tmp;
arr[largestIndex]=0;
if(arr[0]!=0){           
       // edge case what if first elemnet is largest
    tmp=arr[0];
}  
else
{
    tmp=arr[1];         //WIF multple occrences
}

for(int i=0;i<5;i++){
    if(arr[i]!=0 && arr[i]>tmp){
        tmp=arr[i];
    }
}
secondLargest=tmp;
cout<<"\n Printing Second Largest "<<secondLargest;
*/

int main(){
cout<<"\n\n";
int arr[5]={2,23,54,1,37};

cout<<"\n Printing array ";
for(int i=0;i<5;i++)
    cout<<"\t"<<arr[i];

int largest=arr[0];
int secondLargest=0;        

int largestIndex=0;
for(int i=0;i<5;i++){
    if(arr[i]>largest){
        largest=arr[i];

    }   
}
int tmp;

tmp=arr[0];

for(int i=0;i<5;i++){
    
    if(arr[i]!=largest){
        if(arr[i]>tmp)
            tmp=arr[i];
    }
}
secondLargest=tmp;
cout<<"\n Printing Second Largest "<<secondLargest;

cout<<"\n\n";
return 0;
}
