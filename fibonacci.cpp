#include<iostream>
#include<stdio.h>
using namespace std;

// FIBONACCI SERIRES
    //upto ceratin term
    //upto number of terms
        //using pointers
        //using array__ indexes   >>>>>>>>>>>>>done
        //using normal arthimetic
            //find sum
            //find if a term is fibonacci
int main(){

//using array 
int terms;

cout<<"\n\n";
cout<<"enter number of terms\n";
cin>>terms;
int arr[terms];

arr[0]=0,arr[1]=0;

for(int i=1;i<=terms;i++){
    arr[i+1]=arr[i]+arr[i-1];
    cout<<"\n"<<arr[i+1];
    if(arr[1]==0){
        arr[1]=1;
    }
}


/*

*****************************************************************************************8
FAIL 1 - due to not locate next2, also prev=next at each step so double each time 


     int terms,nxt=0,prev1=0;

    cout<<"******************************************";
    cout<<"\n enter number of terms to print ";
    cin>>terms;
int prev2=0;
    for(int i=1;i<=terms;i++){

        nxt=prev1+prev2;
        prev2=prev1+prev2;
        cout<<nxt<<'\n';
        
         prev1=prev2;    

        if(prev2==0){
            prev2=1;

        }
        
    }
   
*/
return 0;
}