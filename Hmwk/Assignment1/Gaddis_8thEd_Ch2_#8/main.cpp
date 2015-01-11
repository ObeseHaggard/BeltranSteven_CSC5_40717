/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hwmk to total purchase problem
 * Created on January 6, 2015, 2:36 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Constants
    const float SLSTX=.07;
    //Declare variables
    float item1, item2, item3, item4, item5, sbtotl, slstx, total;
    item1=15.95;
    item2=24.95;
    item3=6.95;
    item4=12.95;
    item5=3.95;
    cout<<"item 1 = $"<<item1<<endl;
    cout<<"item 2 = $"<<item2<<endl;
    cout<<"item 3 = $"<<item3<<endl;
    cout<<"item 4 = $"<<item4<<endl;
    cout<<"item 5 = $"<<item5<<endl;
    sbtotl=item1+item2+item3+item4+item5;
    cout<<"The Subtotal is $"<<sbtotl<<endl;
    slstx=sbtotl*SLSTX;
    total=slstx+sbtotl;    
    cout<<"Sales Tax is $"<<slstx<<endl;
    cout<<"The total is $"<<total<<endl;
    return 1;
}

