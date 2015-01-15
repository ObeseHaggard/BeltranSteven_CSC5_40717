/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Babylonian calculator
 * Created on January 13, 2015, 10:16 AM
 *      Version 2 with loop
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float number,guess,r;
    //Input a number
    cout<<"Input a number to estimate it's square root"<<endl;
    cout<<"The format will be a positive float"<<endl;
    cin>>number;
    //Intitialize the guess
    guess=number/2;
    for(int count=1;abs(guess-r)>.01;count++){
        r=number/guess;
        guess=(guess+r)/2;
        //Output the result
        cout<<"Loop "<<count<<" -> "<<guess<<endl;
        }
    //Exit stage right
    return 0;
}
