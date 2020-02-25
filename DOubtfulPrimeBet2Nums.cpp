#include<iostream>
using namespace std;
int main(){

/**
 *  written earlier in notebook reamining CHECK 
 * 
 */

int i,start,end,num;

if(start!=0 && start!=1 && (start+1!=end)){
    for(i=start;i<end;i++){
        for(int j=2;j<end;j++){
            if(i%j==0){
                break; // || printf("");
            }
            else{
                num=i;
                cout<<"prime num,is  "<<num;
                break;
            }
        }
    }
}

return 0;
}