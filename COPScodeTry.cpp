#include<iostream>
using namespace std;
void line(){
    cout<<"\n\n*****************************************\n";
}
int main(){

line();
int testcases;
//M is numeber of ocuupued houses by cops
//houseoccp == M
//speed == x
//time == y

int houseoccp,speed,timespent;
cin>>houseoccp>>speed>>timespent;

int houses[100];

int tmp=1;
int occphouse[houseoccp];

while(tmp<=houseoccp){
    cin>>occphouse[tmp-1];
    tmp++;
}

int rate=speed*timespent;

int tmpsize=2*houseoccp;
int covered[tmpsize];
int j;
for(int i=1,j=0;i<=tmpsize;i++){
    covered[i-1]=occphouse[j]-rate;

   if(i!=tmpsize){
        covered[i]=occphouse[j]+rate;
   }

}







    return 0;
}