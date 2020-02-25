#include<iostream>
using namespace std;
int main(){

int x;
cout<<"\n\n pritning x grabage probraly "<<x<<"\n\n";

// tryingthe same in c++

int another;
cout<<"\n\n priting naother "<<another<<endl;



int a, b;
b = 10;

cout<<"\n priting a "<<a<<endl;
cout<<"\n printig b "<<b<<endl;

// got same results as belwow C but not contender on simply introducing another variable 
    // exmaple
        /*
            int x;
cout<<"\n\n pritning x grabage probraly "<<x<<"\n\n";

int another;
cout<<"\n\n priting naother "<<another<<endl;

we get both value as 0 pritined 

but when introduce some 3rd var in c++ then only both defeat by conteder
        
         */

// no garbage pritnde why ??
    /*
*****************************************************    
    //trying in c language
   
    int x;
printf("\n\n priing probably garbage x %d \n\n",x);

/// earlier was priting value of x as 0 but 
// now since 2 contender below code introduced afterwards for 0
// value to omit garbage can
// only assign 0 to one of the value hence x now some garbafge value
// but always the same garbage value does not change


int a, b;
b = 10;
printf("a = %d\n", a);
printf("b = %d\n", b);

printf("\n\n");
********************************************************************
     */
  
  
  
  
    return 0;
}