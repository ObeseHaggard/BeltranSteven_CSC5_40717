/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to pizza pi
 * Created on January 14, 2015, 10:29 AM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int PI=3.14159;

//Function Prototypes
int main(int argc, char** argv) {
    //Declare constants and variables
    const float SLICE=14.125;//1 slice in inches
    unsigned short DPizza;// Diameter of pizza in inches
    unsigned short NPeople;//Number of people 
    //Ask user for Diameter of pizza and number people
    cout<<"What is the Diameter of the pizza? (in inches)"<<endl;
    cin>>DPizza;
    cout<<"Number of people attending?"<<endl;
    cin>>NPeople;
    //Calculate the number of slices per pizza
    float NSlice, Area, Radius;
    Radius=DPizza/2.0f;
    Area=PI*(Radius*Radius);
    NSlice=Area/SLICE;
    //Calculate number of pizza needed for (number) of people
    float NPizza=(NSlice/(4.0f)*NPeople);
    //Output the number of pizza needed
    cout<<fixed<<setprecision (1);
    cout<<"The number of pizza need to be ordered "<<NPizza;
    cout<<" for "<<NPeople<<" people"<<endl;
    

    return 0;
}

