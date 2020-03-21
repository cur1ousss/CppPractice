#include<iostream>
using namespace std;
int main(){

cout<<"\n\n";

for(int step=4;step>=1;step--){
    for(int term=4-step;term>=1;term--){
        cout<<term;
    }
    cout<<"\n";
}
cout<<"\n\n";
   return 0;
}
