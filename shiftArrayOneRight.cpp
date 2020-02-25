#include<iostream>
using namespace std;

int main(){

cout<<"\n\n";
int len=5;
int arr[5]={1,2,3,4,5};

/**
 * 
 * /*
*************************ERROR******************************
*   Lesson Learned >>
*

 *why ERROR >> variable-sized object may not be initialize
  on
    
int len=5;
int arr[len]={1,2,3,4,5};

 * 
 *  
 */


int newarr[len];
cout<<"\n printig original arrays\t";
for(int i=0;i<len;i++){
    cout<<arr[i]<<"\t";
}


for(int i=1;i<5;i++){

if(i==0)
    newarr[0]=arr[len];    
else if(i>0)
    newarr[i]=arr[(i-1)%5]; // i-1 yields garbage as out of index for i=0;
}

/**
 * 
 * 
for(int i=0;i<=5;i++){

newarr[i]=arr[(i-1)%5]; // i-1 yields garbage as out of index for i=0 starting;
                            // also garabage value of i=1 starting 
}
 * 
 */

cout<<"\n printing shifted rotated array\t";


for(int i=0;i<5;i++){   
    cout<<newarr[i]<<"\t";
}
cout<<"\n\n";
    return 0;

}