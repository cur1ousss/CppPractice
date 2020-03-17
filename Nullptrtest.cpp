#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int *ptr=0; // although int *ptr=10 is wrong
                // here 0 == NULL not zero of int

//null ptr can later point to another location


int *nullPtr=NULL;
int q=10;
 ptr=&q;

 nullPtr=&q;
 cout<<nullPtr;

cout<<ptr;

cout<<"\n\n";
return 0;
}