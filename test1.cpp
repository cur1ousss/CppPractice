#include<iostream>
using namespace std;


int fac(int num){
   // cout<<"\nfirst time num"<<num;
    if(num==0){
        return 1;
    }
	if(num>0){
		return num*fac(num-1);
 
	}
}
int main() {
	int num;
	// your code goes here
cout<<"\n\n";
	cin>>num;
    cout<<"\n\n";
	cout<<"\n final answer is "<<fac(num);
    cout<<"\n\n";
    cout<<"\n\n";
	return 0;
}
