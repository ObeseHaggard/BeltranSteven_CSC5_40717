/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Average Rainfall
 * Created on January 24, 2015, 11:15 PM
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
    int years,months=12;
    int ttlMnth,ttlRnFll;//Total Months, Total Rainfall
    int count1,count2;
    int rnFll=0,avg;//rnFll=Rain Fall, avg= Average
    //Display program use and ask for input
    cout<<"This program calculates the average rainfall over a period of years";
    cout<<"\nHow many years do you wish to calculate?";
    cin>>years;
    while (years<1){
        cout<<"Error, please choose a number above 0\n";
        cout<<"\nHow many years do you wish to calculate?";
        cin>>years;
    }
    for (count1=1;count1<=years;count1++){
        for (count2=1;count2<=months;count2++){
            cout<<"What is the inches of rainfall for year "<<count1;
            cout<<", month "<<count2<<endl;
            cin>>rnFll;
            while (rnFll<0){
                cout<<"Error, please choose a positive number";
                cin>>rnFll;
            }
            ttlRnFll+=rnFll;
        }
    }
    ttlMnth=years*months;
    cout<<"Number of months: "<<ttlMnth<<endl;
    cout<<"Total inches of rainfall: "<<ttlRnFll<<endl;
    cout<<"Average rainfall in inches per month: "<<ttlRnFll*1.0f/ttlMnth<<endl;
    return 0;
}

