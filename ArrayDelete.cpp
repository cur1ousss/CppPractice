#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";



/*
                ERROR
                 enter arrsize 7       

 enter arr elements    1
3
5
7
9
1
2

 INPUT array is         1       3       5       7       9       1       2
 enter element to delete   1

 Modified array is      -1      3       5       7       9       -1      2
 Final array is         3       5       7       9

    //last elemetent not printed if long array or delted first or repeatingt elememnt


*/






        //made dynamic
//int arr[5]={1,2,3,-1,5};

int arrsize;
cout<<"\n enter arrsize ";
cin>>arrsize;

int arr[arrsize];

cout<<"\n enter arr elements    ";
for(int i=0;i<arrsize;i++)
    cin>>arr[i];

cout<<"\n INPUT array is    ";
for(int i=0;i<arrsize;i++)
    cout<<"\t"<<arr[i];


cout<<"\n enter element to delete   ";

int elem;
cin>>elem;

for(int i=0;i<arrsize;i++)
    if(arr[i]==elem)
        arr[i]=-1;

cout<<"\n Modified array is ";
for(int i=0;i<arrsize;i++)
     cout<<"\t"<<arr[i];

int tmp=0;
int newarr[arrsize-1];  //considering only deleting one element

for(int i=0;i<5;i++){
    if(arr[i]!=-1){         //match and replace with -1 to make dynamic
        newarr[tmp]=arr[i];
        tmp++;
    }        
    else
    {
        tmp=i;    /// check at tmp=i-1 why error
                // tmp=i+1 better than tmp=i-1
                //but tmp=i correct
    }
    
}

cout<<"\n Final array is    ";
for(int i=0;i<arrsize-1;i++)    //decrease 1 in arrlen // >??how make dynamic decrease
    if(newarr[i])   //sort then find max if(newarr[i]<maxOfarr[i]) to exclude garbage value pushed
    cout<<"\t"<<newarr[i];



cout<<"\n\n";
return 0;
}

/*
                        SECOND TRY static mode
#include<iostream>
using namespace std;
int main(){
cout<<"\n\n";

    int arr[5]={1,2,3,-1,5};
int tmp=0;
int newarr[5];

for(int i=0;i<5;i++){
    if(arr[i]!=-1){         //match and replace with -1 to make dynamic
        newarr[tmp]=arr[i];
        tmp++;
    }        
    else
    {
        tmp=i;    /// check at tmp=i-1 why error
                // tmp=i+1 better than tmp=i-1
                //but tmp=i correct
    }
    
}


for(int i=0;i<4;i++)    //decrease 1 in arrlen // >??how make dynamic decrease
    if(newarr[i])   //sort then find max if(newarr[i]<maxOfarr[i]) to exclude garbage value pushed
    cout<<"\t"<<newarr[i];


cout<<"\n\n";
return 0;
}                        



*******************************************************************
                              FIRST TRY
int arr[5]={1,2,3,4,5};
int arrlen=5;

//deleting element from array
int tmp;

cout<<"\n printing array";
for(int i=0;i<5;i++)
    cout<<"\t"<<arr[i];

int found=0;
    int elem;
while(arrlen!=0){
    cout<<"\n enter element || index to delete";
    cin>>elem;

    //find
    for(int i=0;i<5;i++){

        if(elem==arr[i])
            arr[i]=-1;  //unset matched
    }
//int x=--arrlen;   //create later problem in initiilaising new array
                //so keep same size limit access by var or pointer
int newarr[5];

    //set elem !=found
    
    for(int i=0;i<5;i++){
        if(arr[i]!=-1)      //will cause to skip that index
            newarr[i]=arr[i];
    }

}

*/
