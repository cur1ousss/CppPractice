#include<iostream>
using namespace std;
int main(){

int games;
cin>>games;
int scores[games];
// since not inputted array therfore itself assumed garvage vaues and given
    // random outiput of icnreasedcount and decreasdecount  
        ///?????can use as random number generator??

int decreasedscorecount=0;
int increasedscorecount=0;
for(int i=0;i<games-1;i++){
if(scores[i]>scores[i+1])
    decreasedscorecount++;

else if(scores[i]<scores[i+1])
    increasedscorecount++;    

else 
    continue;
}

cout<<increasedscorecount<<" "<<decreasedscorecount;


    return 0;
}