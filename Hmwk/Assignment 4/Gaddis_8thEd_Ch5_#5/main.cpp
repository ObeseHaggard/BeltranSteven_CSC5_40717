/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Membership Fees Increase
 * Created on January 24, 2015, 10:15 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Display membership fees and increase percentage over next 6 years
    cout<<"The Country Club membership fee is $2500 \nThe fee will increase by ";
    cout<<"4% each year over the next 6 years\n";
    //Declare variables
    float percentage=.04;//Percentage in decimal
    int count,years=6, fee=2500;
    for (count=1;count<=years;count++){
        fee+=fee*percentage;
        cout<<"Year "<<count<<": $"<<fee<<endl;
    }
    
    return 0;
}

