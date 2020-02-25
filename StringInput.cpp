#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main(){
    cout<<"\n\n";
    string inputString;
    getline(cin,inputString);
    cout<<"\n prting inputted string \t "<<inputString;

    string another="somestring";    //works
    cout<<another;      //works


  //  string str3=inputString.strcpy(another);
    string str4=strcpy(inputString,another);
    cout<<"\n"<<str4;
      int len=strlen(inputString);
      
      cout<<"\n\n length of inputString is "<<len; 


    
    // strcpy does not work since not included in <string>
    //  strcpy is included in <string.h>
    
    cout<<"\n\n";
    return 0;
}