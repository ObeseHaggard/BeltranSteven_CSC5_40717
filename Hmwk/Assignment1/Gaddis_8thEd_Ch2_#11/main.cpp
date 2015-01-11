/* 
 * File:   main.cpp
 * Author: Steven
 * Purpose: Hmwk to Distance per Tank of Gas
 * Created on January 6, 2015, 4:11 PM
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
    float mpgtwn,//MPG in town
    mpghwy,//MPG in highway
    avgmpg,//Average MPG
    dist;//distance
    unsigned int gllns;
    gllns=20;
    mpgtwn=23.5;
    mpghwy=28.9;
    avgmpg=(mpgtwn+mpghwy)/2.0;
    dist=avgmpg*gllns;
    cout<<avgmpg<<endl;
    cout<<"The total distance the car can travel is "<<dist<<endl;
    
    return 0;
}

