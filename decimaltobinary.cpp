#include<iostream>
using namespace std;
int main(){

int num;
int binary=0;
cout<<"\n\n";
cout<<"\n enter number ";
cin>>num;
//countign digits
int cpy=num;

cout<<"\n printing copy first time "<<cpy;
int digits=0;
while(cpy!=0){
    cout<<"\n entered counting digits loop";
cpy=cpy/10;
digits++;
}
cout<<"\n num of digits are "<<digits;

int arr[digits];
int loop=0;
cpy=num;
cout<<"\n printing copy second time "<<cpy;
int i=0;
while(cpy!=0){
    cout<<"\n entered assignnig array loop";
arr[i]=num%2;
num=num/2;
cpy=cpy/2;
loop++;
i++;
}
int flag=loop;

cout<<"\n printing nukber \n";
    // arr[flag]=NULL;  // doubtful statemetn seems to correct then seems to fuck up the answer
                // probably because NULL maynot exist in cpp

//arr[flag]=999; works or can ignore its print
for(int i=flag-1;i>=0;i--){
cout<<arr[i]<<"\t";
}

cout<<"\n\n";

return 0;
}
