#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int arr[5]={1,2,3,4,5};

//insert at various postiions   

//insert middle
int newarr[6];

int posToInsert;
cin>>posToInsert;

int elemToInsert;
cin>>elemToInsert;

//copy until postoinsert-1 then continue

for(int i=0;i<posToInsert;i++){

    if(i==(posToInsert-1))
        newarr[i]=elemToInsert;
    else
        newarr[i]=arr[i];
}
    
for(int i=posToInsert;i<6;i++){

    newarr[i]=arr[i-1];
}
    //insetead of 2 for lloops use 1 for loop and manip using aritmetic postioins
        /*
        WORKS 

       //? which is better in time complexity        
for(int i=0;i<6;i++){

    if(i==(posToInsert-1))
        newarr[i]=elemToInsert;
        
    else if(i<posToInsert)
        newarr[i]=arr[i];

    else if(i>=posToInsert)
        newarr[i]=arr[i-1];
}      
        
        */

cout<<"\n Printing arrays";

for(int i=0;i<6;i++)
    cout<<"\t"<<newarr[i];



cout<<"\n\n";
return 0;
}