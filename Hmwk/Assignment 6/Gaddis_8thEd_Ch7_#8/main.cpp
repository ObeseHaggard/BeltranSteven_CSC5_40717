/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Lu Shu Magic Square
 * Created on February 5, 2015, 12:46 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants
const int COL=3;
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and array
    const int ROW=3;
    int array2D[ROW][COL];
    //Assign random seed
    srand(time(NULL));
    //fill array
    for(int row=0;row<ROW;row++){
        for(int col=0;col<COL;col++){
            a[row][COL]=rand()%90+10;
        }
    }
    return 0;
}
