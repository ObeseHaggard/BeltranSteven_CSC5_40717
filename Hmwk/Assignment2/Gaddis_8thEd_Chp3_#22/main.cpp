/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hwmk to Angle Calculator
 * Created on January 12, 2015, 10:54 AM
 */

//System Libraries
#include <cstdlib>//Random rand(),srand ()
#include <iostream>// Keyboard/Monitor I/O
#include <fstream>//File I/O
#include <ctime>// Time functions
#include <cmath>//Math functions library
#include <iomanip>//Format library
using namespace std;

//User Libraries

//Global Constants
const float PIDIV4=atan(1);//PI/4=atan(1)
const float CNVDGRD=PIDIV4*4/180;//PI/4/45 is the same conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare a file object
    ofstream output;
    //Open the file
    output.open("SinCosTan.dat");
    //Declare the angle variable as an integer in
    //in degrees, and the radian angle as a float
    int angDeg=rand()%361-180;//Angle [-180,180]
    float angRad=angDeg*CNVDGRD;
    //Output the angle to the screen
    output<<"Angle in degrees => "<<angDeg<<endl;
    output<<"Angle in radians => "<<angRad<<endl;
    //Output the sin,cos,tan
    output<<fixed<<setprecision(4)<<showpoint;
    output<<"sin("<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
    output<<"cos("<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
    output<<"tan("<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
    //Close the stream
    output.close();
    return 0;
}

