// refer quora for question and anser by MURillo pedroso
#include<iostream>
#include<stdio.h>
using namespace std;
// copied from quora


void readNumbers(int count){
if(count<=0) 
return;

int val;

// how to make a prgram to dynamically in a series 
// input itself??????????????????//////
for(int i=1;i<=30;i++){
cout<<i;
val=i;
scanf("%d",&val);


}readNumbers(count-1);

printf("%d \n ",val);
}

int main(){

cout<<"\n\n";
    readNumbers(30);

    
cout<<"\n\n";
    return 0;
}