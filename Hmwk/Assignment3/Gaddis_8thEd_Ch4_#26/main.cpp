/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Mobile Service Provider 2
 * Created on January 18, 2015, 10:38 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short Min,PackAMin=450,PackBMin=900,choice;
    float AmtDue,PackA=39.99,PackB=59.99,PackC=69.99,XtrMinA=0.45,XtrMinB=0.40;
    float XtraAmt,TtlAmt;
    cout<<"This Program calculates a customer's monthly bill"<<endl;
    cout<<"Please choose a Mobile Service Package (num 1-3)"<<endl;
    cout<<"1. Package A: $39.99 per month for 450 minutes."<<endl<<"Additional";
    cout<<" minutes are $0.45 per minute"<<endl;
    cout<<"2. Package B: $59.99 per month for 900 minutes."<<endl<<"Additional";
    cout<<" minutes are $0.40 per minute"<<endl;
    cout<<"3. Package C: $69.99 per month for unlimited minutes."<<endl;
    cin>>choice;
    cout<<"Please input the amount of minutes were used"<<endl;
    cin>>Min;
    cout<<fixed<<setprecision (2);
    switch(choice){
        case 1:{
            if (Min>PackAMin){
                XtraAmt=(Min-PackAMin)*XtrMinA;
                TtlAmt=XtraAmt+PackA;
                cout<<"The total amount due for this month is $";
                cout<<TtlAmt<<endl;
                if ((Min>PackAMin)&&(Min<=PackBMin)){
                    if (TtlAmt>PackB){
                    cout<<"You can save $"<<TtlAmt-PackB<<" by switching to ";
                    cout<<"Package B"<<endl;
                        }
                }
                else if (Min>PackBMin){
                    cout<<"You can save $"<<TtlAmt-PackC<<" by switching to ";
                    cout<<"Package C"<<endl;
                    }
                }
            else cout<<"the total amount due is $"<<PackA<<endl;
            break;
        }
        case 2:{
            if (Min>PackBMin){
                XtraAmt=(Min-PackBMin)*XtrMinB;
                TtlAmt=XtraAmt+PackB;
                cout<<"The total amount due for this month is $";
                cout<<TtlAmt<<endl;
                if ((Min>PackBMin)&&(TtlAmt>PackC)){
                    cout<<"You can save $"<<TtlAmt-PackC<<" by switching to ";
                    cout<<"Package C"<<endl;
                    }
                }
            else cout<<"the total amount due is $"<<PackA<<endl;
            break;
        }
        case 3:{
            cout<<"the total amount due is $"<<PackC<<endl;
            break;
        }
    }

    return 0;
}

