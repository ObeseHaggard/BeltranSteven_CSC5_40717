/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Markup
 * Created on January 25, 2015, 11:02 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float calculateRetail (float, float, float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float whlSle, markup,retail;
    //State use of program and ask for inputs
    cout<<"This program calculates that calculates an items retail price.\n";
    cout<<"What is the wholesale cost? ";
    cin>>whlSle;
    while (whlSle<0){
        cout<<"Error please choose a positive number.\n";
        cout<<"What is the wholesale cost? ";
        cin>>whlSle;
    }
    cout<<"What is the markup percentage? ";
    cin>>markup;
    while (markup<0){
        cout<<"Error please choose a positive number.\n";
        cout<<"What is the markup percentage? ";
        cin>>markup;
    }
    cout<<fixed<<setprecision (2);
    cout<<"Items retail cost: $"<<calculateRetail(whlSle,markup,retail);
    return 0;
}
float calculateRetail (float w, float m, float r){
    m/=100.0f;
    r=(w*m)+w;
    return r;
}
