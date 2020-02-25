#include<stdio.h>
//#include<iostream>
//using namespace std;
int main(){

// wif try storre garbage value address what is ti ??
int x,y;
int *z;

z=&x;
*z=56;

z=&y;
*z=92;

//what if on;y [print &x ;ike simplty??s]
printf("printing x %d \n",&x);
printf("printing y %d \n ",&y);

    return 0;
}