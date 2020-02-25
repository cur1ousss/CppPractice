#include<iostream>
#include<sstream>
#include<iomanip>

using namespace std;

//print 1 as 01
//referring to reverse a  number as in 210 to 012
        //since facing error in reversing number wayOutRnk


// Refered https://stackoverflow.com/questions/35608291/formatting-how-to-convert-1-to-01-2-to-02-3-to-03-and-so-on
std::string to_format(const int number) {
    std::stringstream ss;
    ss << std::setw(2) << std::setfill('0') << number;
    return ss.str();
}


// WIF use cout<<"printing string 0"<<x;
        //0x

int main(){
cout<<"\n\n";

int x=021;

int y=21;

// int 0z=25;       against naming convetion

cout<<"\n x as 021 initisalised "<<x;  //[prints hex value]

cout<<"\n y as explicit print 0y "<<y;

cout<<"\n forammted string "<<to_format(2);
        // to_format(numbertoInclude0x);


cout<<"\n\n";
    return 0;
}