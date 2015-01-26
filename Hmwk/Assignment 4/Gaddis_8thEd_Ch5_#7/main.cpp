/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Pennies for Pay problem 
 * Created on January 22, 2015, 8:29 PM
 */


//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototype

//Execution begins here!
int main(int argc, char** argv) {
    //Declare variables
    float salary=1;//Integer number of pennies
    float totPay=salary;//Total pay after n days
    unsigned short numDays;//Number of days to double
    //Output the number of days to double your wallet
    cout<<"How many days to double your salary?"<<endl;
    cout<<"Your salary starts with $0.01"<<endl;
    cin>>numDays;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"On the first day ";
    cout<<" your salary = $"<<setw(8)<<salary/100.0f<<endl;
    //Calculate the result
    for(int day=2;day<=numDays;day++){
        salary*=2;
        //salary<<=1;
        totPay+=salary;
        cout<<"After "<<setw(2)<<day<<" days ";
        cout<<" your salary = $"<<setw(11)<<salary/100.0f<<endl;
    }
    //Output the result
    cout<<"After "<<setw(2)<<numDays<<" days your total pay = $";
    cout<<setw(9)<<totPay/100.0f<<endl;
    //Exit Stage Right!
    return 0;
}
