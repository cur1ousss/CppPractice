#include<iostream>
using namespace std;
int main(){

cout<<"\n\n ********************************************************************\n";

int tmp;
for(int step=1;step<=4;step++){

for(int space=4;space>step;space--){
    cout<<" ";
}

for(int term=1;term<=step;term++){

    cout<<term;
    
}

for(int step=4;step>=1;step--){
    for(int term=4-step;term>=1;term--){
        cout<<term;
    }
    cout<<"\n";
}   
    cout<<"\n";
}



cout<<"\n\n ********************************************************************\n";


  return 0;
}




/*

********************************************************************
??//outer looop is to repeat the inner content and move downline the content flow , 
act as a limiter ifcase

********************************************************************
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5
 1 2 3 4 5

// outer loop is just used to repeat the inner content in this case

for(int i=1;i<=5;i++){

for(int j=1;j<=5;j++){

    cout<<" "<<i;

}
    cout<<"\n";
}
********************************************************************

 1
 2 2
 3 3 3
 4 4 4 4
 5 5 5 5 5

 or

 1
 1 2
 1 2 3
 1 2 3 4
 1 2 3 4 5

 or

  
 5
 4 4
 3 3 3
 2 2 2 2
 1 1 1 1 1

>> here outer loop acts as a limitter
    / here what var print affects onlny look of pattern not its feel



for(int i=1;i<=5;i++){

for(int j=1;j<=i;j++){

    cout<<" "<<i;   // here what var print affects onlny look of pattern not its feel

}
    cout<<"\n";
}

// try relate to outer inner realtionship pattern

    // both outer and inner ++ or -- when same then can relate same feel only diifer look

for(int i=5;i>=1;i--){

for(int j=5;j>=i;j--){

    cout<<" "<<i;

}
    cout<<"\n";
}

********************************************************************
 
 1 1 1 1 1
 2 2 2 2
 3 3 3
 4 4
 5

 or

 5 4 3 2 1
 5 4 3 2
 5 4 3
 5 4
 5

or 

 1 2 3 4 5
 1 2 3 4
 1 2 3
 1 2
 1

>>
for(int i=1;i<=5;i++){

for(int j=5;j>=i;j--){

    cout<<" "<<i;

}
    cout<<"\n";
}

// try relate to outer inner realtionship pattern

//when outer -- and inner ++ OR outer ++ inner -- same feel only differ look

for(int i=5;i>=1;i--){

for(int j=1;j<=i;j++){

    cout<<" "<<j;

}
    cout<<"\n";
}




********************************************************************

     1
    1 2
   1 2 3
  1 2 3 4
 1 2 3 4 5
>>\
for(int i=1;i<=5;i++){


for(int space=5;space>i;space--){       // if here space>=i that is if put = then pattern shift right
                                                // one space each line

    cout<<" ";
}
for(int j=1;j<=i;j++){

      cout<<" "<<j;
}
    cout<<"\n";
}


                                    ************************
 // ALSO REFER ABOVE CODE relataed DIRECTULY
// since left space on LHS side also follow some pattern therefore need to apply loop

    1
   12
  123
 1234
12345

>>
for(int i=1;i<=5;i++){


for(int space=5;space>i;space--){

    cout<<" ";
}
for(int j=1;j<=i;j++){

      cout<<j;          // in fact by elimintaing the space here was able to achieve this pattern
                                    cout<<" "<<j earlier
                                    cout<<j         now this code
                                    so in a way diretly realted paaterns 
}
    cout<<"\n";

}

********************************************************************

4321
321
21
1

for(int step=1;step<=4;step++){
    for(int term=5-step;term>=1;term--){
        cout<<term;
    }
    cout<<"\n";
}
cout<<"\n\n";
   return 0;
}

/// below is tjust tghe inverted image upside down of above pattern
        // jisko chaudana hain uske hisab se outer inner bigger smaller 
            // manage
1
21
321
4321

for(int step=5;step>=1;step--){
    for(int term=5-step;term>=1;term--){    // ignored fierst step print 0
                                // since limit term>=1
        cout<<term;
    }
    cout<<"\n";
}
cout<<"\n\n";
   return 0;
}


********************************************************************

54321
 5432
  543
   54
    5
    >>

for(int i=1;i<=5;i++){


for(int space=1;space<i;space++){

    cout<<" ";
}
for(int j=5;j>=i;j--){

      cout<<j;
}
    cout<<"\n";
}

 // ALSO REFER ABOVE CODE relataed DIRECTULY
// since left space on LHS side also follow some pattern therefore need to apply loop


 5 4 3 2 1
  5 4 3 2
   5 4 3
    5 4
     5

>>

for(int i=1;i<=5;i++){


for(int space=1;space<i;space++){

    cout<<" ";
}
for(int j=5;j>=i;j--){

      cout<<" "<<j;           // in fact by elimintaing the space here was able to achieve this pattern
                                  cout<<j  earlier
                                cout<<" "<<j   now this code
                                    so in a way diretly realted paaterns 
}
}
    cout<<"\n";
}


********************************************************************
// some STRANGE PATTERNS
>>

refer for this one belwo
https://www.geeksforgeeks.org/how-to-learn-pattern-printing-easily/

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4


>>






********************************************************************
$ 1$ 2$ 3$ 4$ 5
$$ 1$$ 2$$ 3$$ 4
$$$ 1$$$ 2$$$ 3
$$$$ 1$$$$ 2
$$$$$ 1

for(int i=5;i>=1;i--){

for(int j=1;j<=i;j++){

    for(int space=5;space>=i;space--){
        cout<<"$";
    }
    cout<<" "<<j;

}
    cout<<"\n";
}

another STRAnge pattern
********************************************************************

 1 2 3 4 5
 1 1 2 2 3 3 4 4
 1 1 1 2 2 2 3 3 3
 1 1 1 1 2 2 2 2
 1 1 1 1 1

for(int i=5;i>=1;i--){

for(int j=1;j<=i;j++){

    for(int space=5;space>=i;space--){
        cout<<"";
    
    cout<<" "<<j;
    }
}
    cout<<"\n";
}
********************************************************************

// converging pattern in linear space
 1     1     2    1    2    3   1   2   3   4  1  2  3  4  5


for(int i=1;i<=5;i++){

for(int j=1;j<=i;j++){

for(int space=5;space>=i;space--){

    cout<<" ";
}
      cout<<" "<<j;
}

}
********************************************************************

   1
1
21
321

  12
1
21
321

 123
1
21
321

1234
1
21
321

>>

int tmp;
for(int step=1;step<=4;step++){

for(int space=4;space>step;space--){
    cout<<" ";
}

for(int term=1;term<=step;term++){

    cout<<term;
    
}

for(int step=4;step>=1;step--){
    for(int term=4-step;term>=1;term--){
        cout<<term;
    }
    cout<<"\n";
}   
    cout<<"\n";
}

********************************************************************



// genretes empty output why?? inverstigate later

for(int step=4;step<=1;step--){


for(int term=5;term>=step;term--){

      cout<<" "<<term;
}
    cout<<"\n";
}

 */
