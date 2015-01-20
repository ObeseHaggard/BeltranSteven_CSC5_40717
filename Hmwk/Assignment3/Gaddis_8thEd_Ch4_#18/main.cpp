/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Fat Gram Calculator
 * Created on January 18, 2015, 10:38 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    int FatCAl,TtlCal,FatGrm;//Declare variables
    float CalFat;
    cout<<"Fat Gram Calculator"<<endl;//State use and ask for input
    cout<<"Please input the number of calories."<<endl;
    cin>>TtlCal;
    cout<<"Please input the number of fat grams."<<endl;
    cin>>FatGrm;
    CalFat=FatGrm*9;//Calculate calories from fat
    if ((TtlCal<1)||(FatGrm<0)||(CalFat>TtlCal)){
        cout<<"Input not valid.";
        }
    else if ((CalFat/TtlCal)<(0.30)){
        cout<<"The total amount of calories from fat is ";
        cout<<CalFat/TtlCal*100<<"% and is low in fat"<<endl;
        }
    else {
        cout<<"The total amount of calories from fat is ";
        cout<<CalFat/TtlCal*100<<"%"<<endl;
    }
    return 0;
}

