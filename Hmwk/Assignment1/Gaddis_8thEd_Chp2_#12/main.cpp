/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Land Calculation
 * Created on January 8, 2015, 9:00 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
const unsigned short ACRE=43560;
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    float land=391876;
    float ttlacre;
    //Calculate total acres
    ttlacre=land/ACRE;
    //Output results
    cout<<"the total amount of acres is "<<ttlacre<<endl;
    
    return 0;
}

