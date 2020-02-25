#include<iostream>
#include<ctime>
using namespace std;
int main(){


// refer website http://www.math.uaa.alaska.edu/~afkjm/csce211/fall2018/handouts/RandomFunctions.pdf

cout<<"\n\n priting without seeding that is psedudoram";
for(int i=0;i<=30;i++){
cout  << (rand() % 10) + 1 << endl;
}


cout<<"\n\n priting with seeding that is random";
for(int i=0;i<=30;i++){
srand(time(NULL));
cout << (rand() %10) + 1<<endl;
}

// why different output then shown and told in pdf??

    return 0;
}
