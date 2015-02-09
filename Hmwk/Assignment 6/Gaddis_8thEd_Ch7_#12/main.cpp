/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Grade Book
 * Created on February 6, 2015, 12:27 AM
 */

//System Libraries
#include <iostream>
//#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const int SIZE=5;

//Function Prototypes
void tstRslt(string);
//Execution begins here
int main(int argc, char** argv) {
    string name[SIZE];
    for(int i=0;i<SIZE;i++){
        cout<<"What is the name of student #"<<i+1<<endl;
        cin>>name[i];
        tstRslt(name[i]);
    }
    return 0;
}
void tstRslt(string name){
    float t[SIZE];
    float avg=0,ttl=0;
    for(int i=0;i<SIZE;i++){
        cout<<"What is test score #"<<i+1<<endl;
        cin>>t[i];
        while(t[i]>100||t[i]<0){
            cout<<"Test score not valid please enter test"
                    " scores less than 0 or greater than 100\n";
            cin>>t[i];
        }
        ttl+=t[i];
    }
    avg=ttl/SIZE;
    cout<<name<<"'s average test score: "<<avg<<endl;
    if(avg<=100&&avg>=90){
        cout<<"Final letter grade: A\n";
    }
    else if(avg<=89&&avg>=80){
        cout<<"Final letter grade: B\n";
    }
    else if(avg<=79&&avg>=70){
        cout<<"Final letter grade: C\n";
    }
    else if(avg<=69&&avg>=60){
        cout<<"Final letter grade: D\n";
    }
    else if(avg<=59&&avg>=0){
        cout<<"Final letter grade: F\n";
    }
}