/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Energy drink consumption
 * Created on January 8, 2015, 7:48 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const char CONVPCT=100; //Percent Conversion
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    short custSrv=16500;// Customers Surveyed
    char perEDrk=15;// Percentage Energy Drinkers
    char perCDrk=58;// percentage Citrus Energy Drinkers
    //Calculate customer numbers requested
    short custE=custSrv*perEDrk/CONVPCT;// Energy Drinkers
    short custC=custE*perCDrk/CONVPCT;// Citrus Drinkers
    //Output the result
    cout<<"Customers surveyed that are Energy Drinkers = ";
    cout<<custE<<endl;
    cout<<"Customers surveyed that are Citrus Drinkers = ";
    cout<<custC<<endl;
    //Exit stage right
    return 0;
}

