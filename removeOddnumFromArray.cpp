//CODE>> remvoing odd numbers from array


//???????how form new subarray containing only even terms
//  ???? WIF try repalce with random even  nums
        ///?????? how gennerate random even nums

#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int arr[7]={2,1,4,5,7,9,12};

cout<<"\n orinting original array ";
for(int i=0;i<7;i++){
    cout<<arr[i]<<"\t";
}

for(int i=0;i<7;i++){

if(arr[i]%2!=0){
    arr[i]=999;
}


/*
 * cannot set odd num to zero since if already present then confuse
 * 
 * alternative
 * can try to push into vector only thhe even terms adn print later how??????
 */
}

cout<<"\n printing swapped array ";
for(int i=0;i<7;i++){
    cout<<arr[i]<<"\t";
}

cout<<"\n\n";
return 0;
}  