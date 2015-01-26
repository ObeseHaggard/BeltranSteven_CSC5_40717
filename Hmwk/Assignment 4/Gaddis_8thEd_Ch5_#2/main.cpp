/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Characters for the ASCII Codes
 * Created on January 24, 2015, 11:46 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //This program displays ASCII codes as characters
    //Declare variables
    char ascii=0;
    while (ascii<=15){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    cout<<endl;
    while (ascii>=16&&ascii<=31){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    cout<<endl;
    while (ascii>=32&&ascii<=47){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    cout<<endl;
    while (ascii>=48&&ascii<=63){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    cout<<endl;
    while (ascii>=64&&ascii<=79){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    cout<<endl;
    while (ascii>=80&&ascii<=95){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    cout<<endl;
    while (ascii>=96&&ascii<=111){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    cout<<endl;
    while (ascii>=112&&ascii<=127){
        cout<<static_cast <char>(ascii);
        ascii++;
    }
    return 0;
}

