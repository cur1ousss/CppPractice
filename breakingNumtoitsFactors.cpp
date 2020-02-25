#include<iostream>
using namespace std;
int main(){
int mid;
int num;
cin>>num;
int fac1;

int sizearr=num/2;  // or num/3=size ??? to reduce compelexiyy //but fails
                            // small numbers since int round off so use 
                                // floor or ceil ficntoins???
int arr[sizearr];
// here whemn trying tio store the factors in array liumited by the indices
    // controlling the loop hence problaby use vectors

for(int i=2;i<num;i++){
//cout<<"\n value of i"<<i;
    if(num%i==0){
        mid=num/i;
        cout<<"\n fac1 "<<mid;
    }
    /*
    if(fac1!=0){
        if(mid%i==0){
            fac2=i;
            cout<<"\n fac2 "<<fac2;
        }
*/
        // if number is big it will list all the factors 
                // so need to rediuce them, to prime factors only

// to reduce complexityy can break when found all factores at thta point
       
        //this could be assuming only 2 factors are there
            // so choose array or vector to store all the factors?
 //   }
}



cout<<"\n\n";
    return 0;
}