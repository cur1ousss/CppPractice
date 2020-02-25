#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

/* output
    Partiaaly correct missing 0 1 1 single 1 
 0
 1
 2
 3
 5
 8
 13
 21

*/

int total=7;
int next=0,prev1=0;
int prev2=0;

for(int term=0;term<=total;term++){
next=prev1+prev2;
cout<<"\n "<<next;
prev2=prev1;
prev1=next;

if(prev1==0){
    prev1=1;
}

}

cout<<"\n\n";
return 0;
}



/*
********************************************************************

>>FAILED Attempt 1 


int term=5;
int y=0;
int n=0;
cout<<"\n\n";
while(y<=term){

n+=n+1;
cout<<"\n"<<n;
    y++;
}

********************************************************************



*/