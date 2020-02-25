#include<iostream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main(){
cout<<"\n\n";

int arr[10];
arr[0]=100;

int *ptr1;
int* ptr2;


int *ptr3=arr;

ptr1=arr;

//
ptr2=&arr[2];
ptr2=&arr[0];    //Difference??
//


cout<<"\n\n";
return 0;
}