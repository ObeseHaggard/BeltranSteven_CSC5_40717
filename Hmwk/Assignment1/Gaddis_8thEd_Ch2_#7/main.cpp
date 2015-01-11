/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hwmk to ocean levels problem
 * Created on January 6, 2015, 3:49 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float risnglvl; //MM per year
    unsigned int year5, year7, year10;//numbers of years
    risnglvl=1.5;
    year5=5;
    year7=7;
    year10=10;
    cout<<"The ocean will rise "<<year5*risnglvl<<" millimeters in 5 years"<<endl;
    cout<<"The ocean will rise "<<year7*risnglvl<<" millimeters in 7 years"<<endl;
    cout<<"The ocean will rise "<<year10*risnglvl<<" millimeters in 10 years"<<endl;
    return 0;
}

