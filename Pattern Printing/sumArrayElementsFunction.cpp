#include<iostream>
using namespace std;
//refer https://www.hackerrank.com/challenges/simple-array-sum/problem
// why did they use vectors??
//
/*
#include<iostream>
using namespace std;

void simpleArraySum(int size,int arr[]){
int sum=0;
for(int i=0;i<size;i++){

    sum=sum+arr[i];
}
cout<<sum;
//return sum;

}
int main(){

int size;
//cout<<"\n\n enter size of aray";
cin>>size;
int arr[size];

for(int i=0;i<size;i++){
    cin>>arr[i];
}

//cout<<"\n\nsum is"<<simpleArraySum(size,arr);
simpleArraySum(size,arr);
//cout<<"\n\n";
//


    return 0;
}
 */

int simpleArraySum(int size,int arr[]){
int sum=0;
for(int i=0;i<size;i++){

    sum=sum+arr[i];
}
return sum;

}
int main(){

int size;
cout<<"\n\n enter size of aray";
cin>>size;
int arr[size];

for(int i=0;i<size;i++){
    cin>>arr[i];
}

cout<<"\n\nsum is"<<simpleArraySum(size,arr);

cout<<"\n\n";



    return 0;
}