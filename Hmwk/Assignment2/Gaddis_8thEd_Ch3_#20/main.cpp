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
    unsigned short DPizza;
    cout<<"What is the Diameter of the pizza? (in inches)"<<endl;
    cin>>DPizza;
    //Calculate the number of slices
    float NSlice, Area, Radius;
    Radius=DPizza/2.0f;
    Area=PI*(Radius*Radius);
    NSlice=Area/SLICE;
    //Output the number of slices
    cout<<fixed<<setprecision (1);
    cout<<"The number of slices is "<<NSlice;
    cout<<" for a "<<DPizza<<" inch pizza"<<endl;

    return 0;
}

