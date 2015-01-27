/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Use the Babylonian 10 for retirement
 * Created on January 27, 2015, 9:10 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
//Only for overloaded functions return type does not matter
//only the types associated for parameters in argument list
//Pass by reference vs. pass by value does not count
//when overloading the function name
float retirement(float,float,float,int);
void retirement(float &,float,float,float);

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float salary=150000.0f;
    float invRate=0.05f;//http://california.municipalbonds.com/
    float defPrct=0.20f;//Babylonian 10
    float ndSave=salary/invRate;//Need to save
    float retSav=0;//Retirement Savings
    float nmYears;//Number of years    
    //Heading 
    cout<<"Year    Savings\n";
    cout<<fixed<<setprecision (2)<<showpoint;
    //Calculate when We can Retire
    for (int year=1;retSav<=ndSave;year++){
    //for (int year=1;year<=60;year++){
        retSav=retirement (0.0,invRate,defPrct*salary,year);
        retSav=0;
        retirement(retSav,invRate,defPrct*salary,year*1.0f);
        cout<<setw(4)<<left<<year<<setw(11)<<right<<retSav<<endl;
    }
    //Exit stage right
    return 0;
}

float retirement(float p,float i,float d,int n){
    for (int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
    return p;
}
void retirement(float &p,float i,float d,float n){
    for (int year=1;year<=n;year++){
        p*=(1+i);
        p+=d;
    }
}