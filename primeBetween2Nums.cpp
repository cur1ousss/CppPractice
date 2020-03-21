#include<iostream>
using namespace std;
int main(){
    cout<<"\n\n";

    int start,end;

    cin>>start>>end;
    int flag=1;

    for(int i=start;i<=end;i++){
        for(int k=1;k<i;k++){
            if(k!=1 && i%k==0){
                cout<<"\n Not prime ";
                flag=0;
                  break;
            }
            else{
                flag=1;
            }
        }
        if(flag==1)
            cout<<"\n   Prime "<<i;
    }


    cout<<"\n\n";
    return 0;
}