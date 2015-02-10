/* 
 * File:   main.cpp
 * Author: Steven Beltran
 *
 * Created on February 9, 2015, 10:11 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants

//Function Prototype

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(time(NULL));
    //Fill the Array ADT
    int size=100,perLine=10;;
    Array array;//Declared the array object
    array.filAray(size);//Fill the array
    //Sort the Array ADT
    array.mrkSort();
    //Print the Array ADT
    array.prntAry(perLine);
    //Clean up
    array.destroy();
    //Exit stage right
    return 0;
}
