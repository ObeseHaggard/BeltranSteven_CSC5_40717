/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Population 
 * Created on January 22, 2015, 3:12 PM
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
    //Declare variables
    float nOrg;//Starting number of Organisms
    short avgDPI;//Average Daily Population increase in percentage
    unsigned short nDays;//Number of days
    int day=1;
    float totlPop;
    //Ask user for input
    cout<<"This program will predict the size of a population of organisms.\n";
    cout<<"What is the starting number of the population"<<endl;
    cin>>nOrg;
    totlPop=nOrg;
    cout<<"What is the Average Daily Population increase in percentage"<<endl;
    cin>>avgDPI;
    cout<<"What is the number of days they will multiply"<<endl;
    cin>>nDays;
    if (nOrg>=2&&avgDPI>=0&&nDays>=1){
        cout<<"Population: "<<nOrg<<" \t \t Day 0"<<endl;
        do{
            totlPop=(totlPop*(avgDPI/100.0f))+totlPop;
            cout<<fixed<<setprecision (0);
            cout<<"Population: "<<totlPop<<" \t \t Day "<<day<<endl;
            day++;

        }while(day<=nDays);
    }else cout<<"Error"<<endl;
    return 0;
}

