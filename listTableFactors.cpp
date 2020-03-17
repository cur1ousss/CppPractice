#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int upto;

cin>>upto;

for(int i=1;i<=upto;i++){
   cout<<"\n"<<i<<"\t=>";
    
    for(int j=1;j<=i;j++){
        if(i%j==0){
            // cout<<"\n if conditions";
     
            cout<<"\t"<<j;
        }
        else{
            continue;
        }
        
    }    
    cout<<"\n";
}


cout<<"\n\n";
return 0;
}


/*
            EMPTY Numbers in Output Are PRiME       >>>>>>>>>>>

            #include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

int upto;

cin>>upto;

for(int i=1;i<=upto;i++){
   cout<<"\n"<<i<<"\t=>";
    
    for(int j=2;j<i;j++){
        if(i%j==0){
            // cout<<"\n if conditions";
     
            cout<<"\t"<<j;
        }
        else{
            continue;
        }
        
    }    
    cout<<"\n";
}


cout<<"\n\n";
return 0;
}
*/