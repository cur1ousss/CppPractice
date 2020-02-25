#include<iostream>      // try do without function myRand directly inside main functio also use while
using namespace std;

//?? how achieve the same incrmental effect in MyRand() functio earlier 
// refer steve baker answer on
//https://www.quora.com/How-do-I-generate-random-numbers-in-certain-range-without-using-rand-function-in-C



// works but first time prints 3 digit number // need to correct that


int main(){
int count=0;
int next=238;

char choice;

while(true){
cout<<"\n\n do you want to pritn random number ";
cin>>choice;

if(count>0){
next=next+1;
}

if(choice=='y'){

 next = ((next * next) / 100 ) % 10000 ;
 cout<<"\n priting the random numver "<<next; 
}
else{
    break;


//cannot use break in if else ?>> else block
  /*  but here can since it is not simple if else block 
          example - if(){
            statements
          }
          else{
            break
          }

        // here it is about breakig the flow of parrent while loop

        therefore break can only be used to break the flow since 
        wihtout flow no use as it be will equvalent to a single 
        statemnet not being execytted which wont if conditino is false  
   */


}
count++;
}
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


//  how like nitesh sir repeat the program to ask to continute each time

