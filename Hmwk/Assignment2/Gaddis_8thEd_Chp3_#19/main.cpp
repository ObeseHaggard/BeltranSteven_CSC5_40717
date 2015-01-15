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
    //Declare variables
    float IntRte;//Interest Rate
    float Lnamt;//Loan amt
    float NPymts;// Number of Payments
    float temp;
    float MPayments;//Monthly Payments
    float IntPaid;
    //Ask the user for inputs
    cout<<"What is the Annnual Interest Rate?"<<endl;
    cin>>IntRte;
    cout<<"What is the Loan Amount?"<<endl;
    cin>>Lnamt;
    cout<<"What is the number of monthly payments?"<<endl;
    cin>>NPymts;
    //Calculate monthly payments and interest paid
    IntRte/=(100*12.0f);
    temp=pow((1+IntRte),NPymts);
    MPayments=IntRte*temp*Lnamt/(temp-1);//Monthly Payments
    IntPaid=(MPayments*NPymts)-Lnamt;
    
    //Display results
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Interest Rate: "<<IntRte*100<<"%"<<endl;
    cout<<"Loan Amount: "<<Lnamt<<endl;
    cout<<"Number of Payments: "<<NPymts<<endl;
    cout<<"Monthly Payment: "<<MPayments<<endl;
    cout<<"Amount Paid Back: "<<IntPaid+Lnamt<<endl;
    cout<<"Interest Paid: "<<IntPaid<<endl;
    
    return 0;
}

