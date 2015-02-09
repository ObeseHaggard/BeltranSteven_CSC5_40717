/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to 
 * Created on February 7, 2015, 11:33 PM
 */

//System libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
using namespace std;

//User libraries

//Global Constants

//Function Prototype
const int numD=7;
const int numM=3;
int avg[numD][numM];
//Execution begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int min,max,mK,day;
    float avgTot=0.0f;
    cout<<fixed<<setprecision(2)<<showpoint;
    //Explain program
    cout<<"This program keeps track of three monkeys daily intake."<<endl;
    cout<<"Enter the food in lbs "<<endl;
    cout<<endl;
    //Prompt User
    for(int mK=0;mK<numM;mK++){
        for(int day=0;day<numD;day++){
            cout<<"Monkey "<<(mK+1)<<", "//initializing count of days and monkeys
                <<"Day "<<(day+1)<<": ";
            cin>>avg[mK][day];//User input
        }cout<<endl;
    }
    for(int mK=0;mK<numM;mK++){
        for(int day=0;day<numD;day++){
            avgTot+=(avg[mK][day])/numD;//totaling the average
        }
    }
    max=avg[0][0];//Used to find the max and min
    min=avg[0][0];
    for(int mK=0;mK<numM;mK++){
        for(int day=0;day<numD;day++){
            if(min>avg[mK][day]){
                min=avg[mK][day];
            }else if(avg[mK][day]>max){
                max=avg[mK][day];
            }
        }
    }
    //Output the results
    cout<<"Average food consumption : "<<avgTot<<endl;
    cout<<"Maximum food consumption : "<<max<<endl;
    cout<<"Minimum food consumption : "<<min<<endl;
    return 0;
}

