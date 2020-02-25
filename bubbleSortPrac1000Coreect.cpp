#include<iostream>
using namespace std;
int main(){
// earler faced prob;e, now sol;ved 
/*basically understand by simply sorting a single at a tine to undersstand 
the priblem faced in indexing 
i and i+1 */

int arr[5];
cout<<"\n size of array is 5\n";
cout<<"\n enter the terms of tje array";
for(int i=0;i<5;i++){
    cin>>arr[i];
}
cout<<"\n\n printing original; array\n";
for(int i=0;i<5;i++){
    cout<<" "<<arr[i];
}

//siortings\


//care abiyt the edge cases dont go over the edge
int swap=10000;
for(int step=0;step<5;step++){
    for(int term=0;term<4;term++){ //       term < size-1 
// descimedig order or ascedning can mainupulate 
        if(arr[term]<arr[term+1]){
            swap=arr[term];
            arr[term]=arr[term+1];
            arr[term+1]=swap;
        }

    }

}

cout<<"\n\n printing SORTED; Descneding Order array\n";
for(int i=0;i<5;i++){
    cout<<" "<<arr[i];
}

cout<<"\n\n";
    return 0;
}