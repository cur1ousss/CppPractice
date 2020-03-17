#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

        // 2 is the edge case

int arr[5]={5,2,7,19,21};

int primeArr[5];
for(int i=0;i<5;i++)
    primeArr[i]=0;

for(int i=0;i<sizeof(arr)/sizeof(int);i++){

    int num=arr[i];
    int flag=0;
    for(int k=1;k<num;k++){
        if(num%k==0 && k!=1){
            flag=0;
            break;  //EXPerimmental
     }
     else{
         flag=1;
     }
}
    if(flag==1)

        primeArr[i]=num;
}

for (int i = 0; i < 5; i++)
        cout<<"\t"<<arr[i];

cout<<"\n\n";

int countPurePrime=0;
for(int i=0;i<5;i++){
        cout<<"\t"<<primeArr[i];
    if(primeArr[i]!=0)
        countPurePrime++;
}
    

int holdPurePrimeArr[countPurePrime];    

int tmpcount=0;
for(int i=0;i<5;i++){

    if(primeArr[i]!=0){
        holdPurePrimeArr[tmpcount]=primeArr[i];
        tmpcount++;
    }
}

cout<<"\n\n Printing PURE pRIME";
for(int i=0;i<countPurePrime;i++)
    cout<<"\t"<<holdPurePrimeArr[i];
cout<<"\n\n";
return 0;
}