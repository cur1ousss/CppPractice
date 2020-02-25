//understanding how nestted for loop works
    // tried before mayeb on google keep abhi110405@gmail.com
#include<iostream>
using namespace std;
void line(){
    cout<<"\n\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n\n";
}
int main(){
    line();
    
    for(int i=0;i<=5;i++){
        cout<<"priting from for loop without escape sequences ANY like \\n and \\t";
    }

        // unlike as it seems in pattern pritning the internal block or a block in general intends
            // to print in a horizonatl line
            // but after introducing \n escape seqeunce in outer loop we make it to print in 
            // vertical new lines 


    line();
    
        return 0;
}    
