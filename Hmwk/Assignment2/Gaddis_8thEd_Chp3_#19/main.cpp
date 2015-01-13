/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Monthly Payments
 * Created on January 12, 2015, 11:27 AM
 */

//System Library
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variabls
    float IntRte;//Interest Rate
    float Lnamt;//Loan amt
    float NPymts;// Number of Payments
    //Ask the user for inputs
    cout<<"What is the Annnual Interest Rate?"<<endl;
    cin>>IntRte;
    cout<<"What is the Loan Amount?"<<endl;
    cin>>Lnamt;
    cout<<"What is the number of payments?"<<endl;
    cin>>NPymts;
    //Calculate monthly payments
    IntRte=IntRte/12;
    float temp=pow((1+IntRte),NPymts);
    float MPayments=IntRte*temp*Lnamt/(temp-1);//Monthly Payments
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Interest Rate = "<<IntRte<<endl;
    cout<<"Loan Amount = "<<Lnamt<<endl;
      
    return 0;
}

