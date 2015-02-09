/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Payroll
 * Created on February 5, 2015, 12:46 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and array
    const int ROW=7;
    //Employee ID
    int empId [ROW]{5658845,4520125,7895122,8777541,8451277,1302850,7580489};
    int hours [ROW];//Amount of hours worked per employee
    float pyRte [ROW];//Pay rate per employee
    float wages [ROW];//Employee gross wage
    for(int i=0;i<ROW;i++){
        cout<<"Please enter the employee's hours and pay rate.\n";
        cout<<"Do not enter hours less than 0 or pay rate less than $15.00\n";
        cout<<"Employee ID: "<<empId[i]<<endl;
        cout<<"Hours worked: ";
        cin>>hours[i];
        while(hours[i]<0){
            cout<<"Input not valid please enter a positive value ";
            cin>>hours[i];
        }
        cout<<"Pay rate: ";
        cin>>pyRte[i];
        while(pyRte[i]<15){
            cout<<"Input not valid. enter an amount greater or equal to $15 ";
            cin>>pyRte[i];
        }
    }
    cout<<fixed<<setprecision(2)<<showpoint;
    for(int i=0;i<ROW;i++){
        wages[i]=hours[i]*pyRte[i];
        cout<<"Employee ID:"<<empId[i]<<"\nGross Wages: $"<<wages[i]<<endl;
    } 
    return 0;
}
