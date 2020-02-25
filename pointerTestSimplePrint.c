#include<stdio.h>
int main(){

int x=5;
int y=(int *)&x;
// equivalkent to y=&x; but now explicitly type casting
int z=&x;


/*WARNIG IS >> initialization makes integer from pointer without a cast [-Wint-conversion]
 int z=&x;
       ^
      
    but runs without error

    caveat each time program runs a differnet address assignd to x 
     PS..CORRECT >>      //?? inherently true because dynamically compiler allocate best posible 
                // memory in that scenario
    // above called address space layout randomiuzaton to avoid vulnerablities

    // value of printing y and z is same  
       */

printf("\n printig x single time %d",x);
printf("\n printig x once more simply to check if value changes or not  %d",x);
printf("\n printing x wihth y=(int *)&x explicit typecasting %d",y);     
printf("\n pritnig z with implciti type casting %d",z);

/**/

printf("\n\n");

    return 0;
}