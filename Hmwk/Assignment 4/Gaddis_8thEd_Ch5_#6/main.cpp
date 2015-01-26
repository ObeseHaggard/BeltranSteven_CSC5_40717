/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Distance Traveled Problem
 * Created on January 22, 2015, 8:36 PM
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
    int speed,miles,time,hour,dist;//dist = distance
    //Ask user for data
    cout<<"What is the speed of the vehicle in mph? ";
    cin>>speed;
    cout<<"How many hours has it traveled? ";
    cin>>time;
    hour=1;
    //Verify and initialize calculations
    if (speed>=0&&time>=1){
        do{
           miles=speed*hour;
           cout<<"Hour "<<setw (15)<<"Miles Traveled"<<endl;
           cout<<hour<<setw (15)<<miles<<endl;
           hour++;
        }while(hour<=time);
        
    }else cout<<"Error"<<endl;

    return 0;
}

