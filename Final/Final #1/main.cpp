/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Program #1 to final
 * Created on February 14, 2015, 9:35 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void conv(int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and initialize
    unsigned short input;
    //Ask user for a unsigned short
    cout<<"Please input a number\n";
    cin>>input;
    conv(input);
    return 0;
}
void conv(int in){
    signed int out= 0;//use int to check range

    for(;in;){//reverse numbers 
        out*=10;
        out+=(in%10);
        in/=10;
    }
    if(out>=0&&out<=32767){
        cout<<out<<endl;
    }
    else if(out<0||out>32767){//check range
        cout<<"Conversion not possible\n";
    }
}