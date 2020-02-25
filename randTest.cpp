#include<iostream>
using namespace std;

// refer steve baker answer on
//https://www.quora.com/How-do-I-generate-random-numbers-in-certain-range-without-using-rand-function-in-C

int myRand ()  // Generate a 4 digit pseudo-random integer
{
    // Anything you like here - but not
                           // 0000, 0100, 2500, 3792, 7600,
                           // 0540, 2916, 5030 or 3009.
int count=0;
int next=238;

if(count>0){
next=next+1;
}

  next = ((next * next) / 100 ) % 10000 ;
  
  next++;
  count++;
  return next ;

}


int main(){

  



  return 0;
}





/*

int main(){

char choice;
cout<<"\n do you want to continue";
cin>>choice;


if(choice=='y'){

cout<<"\n\n priting random number\t";

cout<<myRand();
}


cout<<"\n\n";
 */


//cannot use break in if else ?>> else block

//  how like nitesh sir repeat the program to ask to continute each time

