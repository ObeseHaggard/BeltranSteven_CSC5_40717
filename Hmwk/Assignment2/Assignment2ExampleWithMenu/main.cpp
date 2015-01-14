/* 
 * File:   main.cpp
 * Author: Steven  Beltran
 * Purpose: How to make a menu
 * Created on January 14, 2015, 11:01 AM
 */

//System Library
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
    //Assignment 2 menu
    cout<<"Solution 1: Savitch 8thEd Chap 2 Problem 2"<<endl;
    cout<<"Solution 2: Savitch 8thEd Chap 2 Problem 3"<<endl;
    cout<<"Getting the idea"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch (choice){
        case 1:{
            cout<<"you have choosen Solution 1"<<endl;
            break;
        }
        case 2:{
            cout<<"you have choosen Solution 2"<<endl;
            break;
        }
        default:{
            cout<<"finally getting the idea"<<endl;
        }
    }
    return 0;
}

