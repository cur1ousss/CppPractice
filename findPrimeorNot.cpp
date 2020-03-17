#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int num;

cin>>num;
int flag=0;

for(int i=1;i<num;i++){
    if(num%i==0 && i!=1){
        flag=0;
        cout<<"NOT prime";
        cout<<"\n Break found at start of  "<<i;   
        break;
        //break at first match
    }       
    else{
        flag=1;
    //   cout<<"prime";
    //   cout<<"\n falcay break at "<<i;
    //   break;
                // TO avoid fallacy break of not a  factor cannot depend upon this condition hence use some sort of flag
    }
        
}
if(flag==1)
cout<<"\n Prime "<<num;

cout<<"\n\n";
return 0;
}