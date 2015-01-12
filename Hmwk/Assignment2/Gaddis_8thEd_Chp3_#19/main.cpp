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
    float IntRate=.12f/12,//Interest Rate
    Lnamt=10000.00f,//Loan amt
    NPymts=36;// Number of Payments
    //Calculate monthly payments
    float temp=pow((1+IntRate),NPymts);
    float MPayments=IntRate*temp*Lnamt/(temp-1);//Monthly Payments
    //Output the monthly payment
    cout<<"Monthly Interest Rate = "<<IntRate*100<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan Amount = "<<Lnamt<<endl;
    
      
    return 0;
}

