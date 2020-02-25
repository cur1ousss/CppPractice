#include<iostream>
#include<stdlib.h>

using namespace std;

struct employee{
int age;
int sal;
};


int main(){
cout<<"\n\n";

struct employee varofStruct;

cout<<"\n setting using Struct and Dot operator";

varofStruct.age=5;
varofStruct.sal=100;

cout<<"age and sal of Struct var "<<varofStruct.age<<"\t "<<varofStruct.sal;

cout<<"\n AGAIN";
varofStruct.age=25;
varofStruct.sal=2100;

cout<<"age and sal of Struct var "<<varofStruct.age<<"\t "<<varofStruct.sal;

/*
*************************CONCLUSION******************************
*	>>
*   Can rewrite struct members again
*/

cout<<"\n\n";
    return 0;
}

