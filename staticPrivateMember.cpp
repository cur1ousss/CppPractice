#include<iostream>
using namespace std;

/*
ERROR >>> classCallMemberVariable.cpp:7:20: error: ISO C++ forbids in-class initialization of non-const static member ‘test::priv’
         static int priv=100;
                   ^~~~

LESSON >>
Public || Private member with inintialisation(compulsory) cannot be static but can be const static with intilisation(mandatory)



class test{

    private:
        static int priv=100;

    public:
        static void show(){
            cout<<"\n printing priv "<<priv;
        }    
};


int main(){
cout<<"\n\n";

test ob;
ob.show();


cout<<"\n\n";
return 0;
}


*/

class test{

    private:
       static int priv=100;

    public:
        void show(){
            cout<<"\n printing priv "<<priv;
        }    
};


int main(){
cout<<"\n\n";


test ob;
ob.show();


cout<<"\n\n";
return 0;
}