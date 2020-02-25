#include<iostream>
using namespace std;
int main(){
    
    int arr[6]={1,1,1,2,2,3};

int count=0;
cout<<"\n\n";



for(int j=0;j<6;j++){

 for(int i=0;i<6;i++){
    cout<<"\narr["<<j<<"] is "<<arr[j];
    cout<<"\narr["<<i<<"] is "<<arr[i];
    
    if(arr[j]==arr[i]){
        cout<<"\n arr["<<j<<"] term "<<arr[j]<<" is same as arr["<<i<<"] term "<<arr[i];
        count++;
        }
    else{
        cout<<"\n *********** not same";
    }
       // cout<<"\n count for arr["<<j<<"] the term "<<arr[j]<<" is "<<count;
            
    }
     cout<<"\n count for arr["<<j<<"] the term "<<arr[j]<<" is "<<count;
       if(count>1){
           //sttore term in some array and its next index will be count /// array will give repeating terms
            //?????? but how size since dynamic array?? use vectores??
       }

    count=0;
//?????????????? how to relate 2 arrays so can relate term with its count

}
   

cout<<"\n\n";
/* 
probaly soltutoin to solving index problem but whta 
about when indexing dependdent nested for loop

    for(int i=1;i<6;i++){
        if(arr[i-1]==arr[i]){

        }
    }

*/


    return 0;
}