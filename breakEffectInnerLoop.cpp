#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

/*
*************************IMPORTANT******************************
*Lesson Learned >>
// Break only breaks out of inner loop once condition satisfied 
    //DOES NOT Break the whole oouter loop

*/
for(int i=0;i<5;i++){
    cout<<"\nAbove Inner loop Outer Loop starting execute 5 times "<<i;
    for(int k=0;k<5;k++){
        cout<<"\n execute 2 ittmees then break "<<k;
        if(k==2)
            break;
    }
    cout<<"\n Below Inner Loop executr times "<<i;
}
cout<<"\n\n";
return 0;
}