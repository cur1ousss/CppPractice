#include<iostream>
using namespace std;
int main(){

int num1;   
cin>>num1;
int num2;
cin>>num2;
cout<<"\n\n";

if(num1%num2==0){
    cout<<"\n LCM is "<<num1;
}
else if(num2%num1==0){
    cout<<"\n LCM is "<<num2;
}
else{
    cout<<"\n LCM is "<<num1*num2;
}
cout<<"\n\n\n";

    return 0;
}