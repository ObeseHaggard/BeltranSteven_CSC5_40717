/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Winning Divisions
 * Created on January 25, 2015, 11:24 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getSales(float);
void findHighest(float,float,float,float);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float nE,sE,nW,sW;//NorthEast,SouthEast,NorthWest,SouthWest
    //Declare program purpose and ask for input
    cout<<"This program determines which of a company’s four divisions ";
    cout<<"(Northeast,Southeast, Northwest, and Southwest) ";
    cout<<"had the greatest sales for a quarter. \n";
    cout<<"Northeast Division:\n";
    cout<<getSales(nE);
    cout<<"\nSoutheast Division:\n";
    cout<<getSales(sE);
    cout<<"\nNorthwest Division:\n";
    cout<<getSales(nW);
    cout<<"\nSouthwest Division:\n";
    cout<<getSales(sW);
    //calculate and display highest grossing division
    cout<<findHighest(nE,sE,nW,sW);
    return 0;
}
float getSales(float D){
    cout<<"What is the quarterly sales amount for this division? ";
    cin>>D;
    while (D<0){
        cout<<"Error please enter a valid amount.\n";
        cout<<"What is the quarterly sales amount for this division? ";
        cin>>D;
    }
    return D;
}
void findHighest(float nE,float sE,float nW,float sW){
    if ((nE>sE)&&(nE>nW)&&(nE>sW)){
        cout<<"Northeast Division is the highest grossing division.\n";
        cout<<"Total Sales: $"<<nE<<endl;
    }
    else if ((sE>nE)&&(sE>nW)&&(sE>sW)){
        cout<<"Southeast Division is the highest grossing division.\n";
        cout<<"Total Sales: $"<<sE<<endl;
    }
    else if ((nW>nE)&&(nW>sE)&&(nW>sW)){
        cout<<"Northwest Division is the highest grossing division.\n";
        cout<<"Total Sales: $"<<nW<<endl;
    }
    else if ((sW>nE)&&(sW>sE)&&(sW>nW)){
        cout<<"Southwest Division is the highest grossing division.\n";
        cout<<"Total Sales: $"<<sW<<endl;
    }
}