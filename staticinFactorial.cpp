#include<iostream>
using namespace std;

//Probalby using the for loop iteration and funciton fact()


int fact(int num){

    if(num==1)
        return 1;

    return num*fact(num-1);
}



int main(){

cout<<"\n\n";

cout<<"\n printing factoiral "<<fact(5);

cout<<"\n\n";
    return 0;
}



/**
 *                       NORMAL RECURSIVE METHOD
 * 
 * 
 *  // in parameter can use int fact(const int num) //still no change in
 * answer WHY?
int fact(int num){

    if(num==1)
        return 1;

    return num*fact(num-1);
}
int main(){

cout<<"\n\n";

cout<<"\n printing factoiral "<<fact(5);

cout<<"\n\n";
    return 0;
} 
 */