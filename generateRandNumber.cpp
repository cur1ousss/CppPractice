#include<iostream>
using namespace std;


// refer steve baker answer on
//https://www.quora.com/How-do-I-generate-random-numbers-in-certain-range-without-using-rand-function-in-C


int myRand ()  // Generate a 4 digit pseudo-random integer
{
  static int next = 3251 ; // Anything you like here - but not
                           // 0000, 0100, 2500, 3792, 7600,
                           // 0540, 2916, 5030 or 3009.
  next = ((next * next) / 100 ) % 10000 ;
  return next ;
}
int main(){

cout<<"\n\n priting random number\t";

cout<<myRand();

cout<<"\n\n";


}