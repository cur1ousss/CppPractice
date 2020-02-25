#include<stdio.h>
void show();
//cannot Overload function in C
void show(int x);

int main(){

printf("\n\n\n");

printf("\n\n\n");

    return 0;
}


void show(){
    printf("\nempty show");
}


void show(int x){
    printf("\n int x show");
}

