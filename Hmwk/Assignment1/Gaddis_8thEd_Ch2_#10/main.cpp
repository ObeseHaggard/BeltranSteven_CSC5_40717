/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hwmk to Miles per Gallon
 * Created on January 6, 2015, 4:01 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned int mpg,//Miles per Gallon
    miles, gallon;
    miles=375;
    gallon=15;
    mpg=miles/gallon;
    cout<<"MPG = "<<mpg<<endl;

    return 0;
}

