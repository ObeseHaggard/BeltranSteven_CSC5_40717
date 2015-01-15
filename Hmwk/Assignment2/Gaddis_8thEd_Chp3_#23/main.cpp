/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Stock Transaction Program
 * Created on January 14, 2015, 8:33 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables and initialize
    unsigned short shares=1000;//Shares bought
    float PrPStckB=45.5;//Price per Stock when Purchased
    float PrPStckA=56.9;//Price per Stock when Sold
    float AmtPaid,AmtSl;// Amount Paid and Amount when Sold
    float BrkrB,BrkrA;// Commission to broker before and after
    const float CMSN=.02;//Commission for the Stockbroker
    AmtPaid=PrPStckB*shares;
    BrkrB=AmtPaid*CMSN;
    AmtSl=PrPStckA*shares;
    BrkrA=AmtSl*CMSN;
    //Display results
    cout<<"Joe paid $"<<AmtPaid<<" for the stock"<<endl;
    cout<<"Joe paid $"<<BrkrB<<" to his Stock Broker for purchase of stock"<<endl;
    cout<<"Joe then sold his stock for $"<<AmtSl<<endl;
    cout<<"Joe paid $"<<BrkrA<<" to his Broker for stock sold"<<endl;
    cout<<"Joe made a profit of $"<<AmtSl-AmtPaid-BrkrB-BrkrA<<endl;
    //Exit 
    return 0;
}

