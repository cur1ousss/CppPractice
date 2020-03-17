#include<iostream>
using namespace std;
int main(){

int num;
int binary=0;

cout<<"\n enter number ";
cin>>num;
int cpy=num;
int digits=0;

while(cpy!=0){

cpy=cpy/10;
digits++;
}
cout<<"\n num of digits are "<<digits;

int arr[digits];
int loop=0;
cpy=num;

while(cpy!=0){
arr[i]=num%2;
num=num/2;
loop++;
}
int flag=loop;

cout<<"\n printing nukber \n";

for(int i=flag;i>=0;i--){
cout<<arr[i]<<"\t";
}

cout<<"\n\n";

return 0;
}
