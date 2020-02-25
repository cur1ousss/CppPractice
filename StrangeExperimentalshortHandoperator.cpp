#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";
int sum=5;

/*starnge since apt shorthand operator is
        sum+=sum   and NOT sum=+sum || sum=+5

********************************************************************
      
        //actually not strange since maybe assume as +5 [positive 5] in the sense

        
        */



sum=+5;
cout<<sum;

sum=+sum;
cout<<"\n printing output of above equation "<<sum;

cout<<"\n\n";
return 0;
}