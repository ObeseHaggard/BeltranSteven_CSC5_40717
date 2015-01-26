/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Ocean Levels
 * Created on January 25, 2015, 10:49 PM
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
    float ocnLvl=1.5,ttlLvl;
    short years=25,temp=1;
    //Output the program function
    cout<<"This program calculates the ocean level's rise in about 25 years.\n";
    cout<<"Assuming it is rising at about 1.5 millimeters per yer.\n";
    //Calculate the increase in a loop
    for (temp;temp<=years;temp++){
        ttlLvl+=ocnLvl;
        cout<<"Year "<<temp<<": "<<ttlLvl<<endl;
    }
    return 0;
}

