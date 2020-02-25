#include<iostream>
using namespace std;


void line(){
    cout<<"\n*************************************************\n";
}

int main(){


line();
int arr[5]={1,2,3,4,5};

int rev[5];
for(int i=4;i>=0;i--)
{
rev[4-i]=arr[i];
}
line();
for(int j=0;j<=4;j++){
    cout<<"\t"<<rev[j];

}
line();

    return 0;
}

