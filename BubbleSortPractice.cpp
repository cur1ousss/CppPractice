#include<iostream>
using namespace std;

void line(){
    cout<<"\n**********************************************************\n";
}
int main(){

line();

              
//int arr[7]={3,7,32,21,54,1,2};
int swap=1000;
int arr[7]={3,7,32,21,54,1,2};
line();
int terms=0;
cout<<"\n enter the number of terms";
cin>>terms;
line();
cout<<"\nenter the elements of array";
for(int i=0;i<terms;i++){
    cin>>arr[i];
}
line();
for(int i=0;i<terms;i++){

cout<<"\t"<<arr[i];

}
    
line();
for(int i=0;i<terms;i++){
    for(int j=0;j<i-1;j++){   // j<terms of input array   
                                            //int j=1;j<5;j++
                                            //int j=0;j<i-1;j++
    if(arr[j]>arr[j+1]){

    swap=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=swap;

    }

    }
}
line();
for(int i=0;i<terms;i++){

cout<<"\t"<<arr[i];

}

line();


/*
    // can also partially sort array although having more terms not necesary to sort all terems 
        //?? helphul later in finding more alternantive ways for optimization if array seemingly contains 
                //already sorted terms ignore them ,hence only need to partially sorted 


int arr[7]={3,7,32,21,54,1,2};
int swap=1000;
int arr2[5]={3,7,32,21,54};
for(int i=0;i<5;i++){
    for(int j=0;j<i-1;j++){   // j<terms of input array   

    if(arr[j]>arr[j+1]){

    swap=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=swap;

    }

    }
}
line();
for(int i=0;i<5;i++){

cout<<"\t"<<arr[i];

}

line();

*/

    return 0;
}