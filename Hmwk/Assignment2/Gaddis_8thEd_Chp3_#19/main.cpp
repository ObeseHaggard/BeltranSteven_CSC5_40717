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
    float temp;
    float MPayments;//Monthly Payments
    //Ask the user for inputs
    cout<<"What is the Annnual Interest Rate?"<<endl;
    cin>>IntRte;
    IntRte/=(100*12);//convert to decimal and to months
    cout<<"What is the Loan Amount?"<<endl;
    cin>>Lnamt;
    cout<<"What is the number of monthly payments?"<<endl;
    cin>>NPymts;
    //Calculate monthly payments
    if(IntRte<=0){
        MPayments=1/NPymts;
    } else{
        temp=pow(1+IntRte, NPymts);
        MPayments=IntRte*temp*Lnamt;
    }
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Interest Rate = "<<IntRte<<endl;
    cout<<"Loan Amount = "<<Lnamt<<endl;
      
    return 0;
}

