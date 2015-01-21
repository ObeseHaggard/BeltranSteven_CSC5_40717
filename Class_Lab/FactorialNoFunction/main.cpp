/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Created on January 21, 2015, 8:52 AM
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
    int nFactrl=1,n;
    //Prompt user for factorial
    cout<<"What N would you like to use to calculate N!"<<endl;
    cin>>n;
    //Do the calculations
    for (int i=1;i<=n;i++){
        nFactrl*=i;
    }
    //Output the result
    cout<<n<<"! = "<<nFactrl<<endl;
    //Exit stage right
    return 0;
}

