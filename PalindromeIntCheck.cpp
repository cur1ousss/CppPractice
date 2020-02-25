#include<iostream>
using namespace std;
int main(){

int num=242;

int rem=0;
int rev=0;
cout<<"\n\n";
int tmp=num;
while(tmp!=0){
rem=tmp%10;
cout<<"\n remainder at step "<<rem;
rev=rev*10+rem;
tmp=tmp/10;
}
cout<<"\n original number is "<<num;
cout<<"\n reverse number is "<<rev;
if(rev==num){
    cout<<"\npalindrome";
}
else{
    cout<<"\nfuck off";
}
//testing while loop workig in !=0 or not
/*
int x=1;
while(x!=0){
    cout<<"\ntest print while not equals 0\n";
    x--;
}
/*
 */
cout<<"\n\n";
    return 0;
}