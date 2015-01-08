/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Circut Board Price
 * Created on January 8, 2015, 9:17 AM
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
    float prftpct=.35,prft, brdcst=14.95, sllngprc;
    prft=prftpct*brdcst;
    sllngprc=prft+brdcst;
    cout<<"The sale price of the board is "<<sllngprc<<endl;

    return 0;
}

