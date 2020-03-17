#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

        // two ways
            //  prime factors only {not all factors are prime 8=2x4 4 not prime}
            //  all the factors (inclusive and exclusiive the number and 1 )

//Listing all the factors

int num;
cin>>num;

//INCLUISVE
if(num<5)
    int allFactors[num];
else   
    int allFactors[num/2];      // to reduce time complexity not iterate whole

int allFactors[num/2];  //if not write ERROR in line 28 say Undefined
int sizeAllFactorArr=0; 

for(int i=1;i<=num;i++){ 
    if(num%i==0){
        allFactors[sizeAllFactorArr]=i;
        sizeAllFactorArr++;
    }
}

cout<<"\n ALL the factors are ";
for(int i=0;i<sizeAllFactorArr;i++)
    cout<<"\t"<<allFactors[i];

//  sizeAllFactorArr reached end index


                    //SizePrimeFactorArr is variable
//int PrimeFactors[sizeAllFactorArr];        >>> in best case can be eqaul all factors are prime 
                       //  >>> otherwiise < less than case more probable

//sieving prime factors

int primeFactors[sizeAllFactorArr];
int sizePrimeFactorArr=0;


// sizeAllFactorArr=sizeof(allFactors)/sizeof(int)

if(sizeAllFactorArr!=2){
for(int i=0;i<sizeAllFactorArr;i++){
    int isPrime=0;
        for(int k=1;k<allFactors[i];k++){

            // if(allFactors[i]==3)
                // cout<<"\n 3 CAUGHT";
            // cout<<"\n number to check "<<allFactors[i];
                if(k!=1 && allFactors[i]%k==0){    //&& allFactors[i]!=1
                        // cout<<"\n 3 Cauhtj in NOT prime ";
                      isPrime=0;  
                      break;
                }
                else{
                    // if(allFactors[i]==3)
                        // cout<<"\n 3 CAught int else Condinto prime";
                    isPrime=1;
                }
        }
        if(isPrime==1){
            // cout<<"\n   is PRime "<<allFactors[i];
            primeFactors[sizePrimeFactorArr]=allFactors[i];
            sizePrimeFactorArr++; 
            }
        else{
            // cout<<"\n is NOT prime "<<allFactors[i];
        }

   
}

cout<<"\n Printing all the Prime Factors only ";
for(int lp=0;lp<sizePrimeFactorArr;lp++)
    cout<<"\t\t"<<primeFactors[lp];



}
else if(sizeAllFactorArr==2){
    cout<<"\nNumber itself is prime so no prime factors";
}



/*  
int k=0;
for(int i=1;i<=allFactors[i-1];i++){  //&& i<sizeAllFactorArr
    cout<<"\n Sieve looop enter value i "<<i;
    if(allFactors[i-1]%i==0){
            cout<<"\n   Not a prime >> "<<allFactors[i-1];
    //  continue; 
                //miss edge case?
    }
    else{
        cout<<"\n prime numebr >> "<<allFactors[i-1];
        PrimeFactors[k]=allFactors[i-1];
    }
    
    k++;
}
*

cout<<"\n pRitng PRIME Factors";
for(int i=0;i<k;i++)
    cout<<"\t"<<PrimeFactors[k];
*/


cout<<"\n\n";
return 0;
}