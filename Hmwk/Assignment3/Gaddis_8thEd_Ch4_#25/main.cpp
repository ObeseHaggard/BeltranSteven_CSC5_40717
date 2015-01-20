/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Mobile Service Provider
 * Created on January 18, 2015, 10:38 AM
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
    unsigned short Min,PackAMin=450,PackBMin=900,choice;
    float AmtDue,PackA=39.99,PackB=59.99,PackC=69.99,XtrMinA=0.45,XtrMinB=0.40;
    float temp;
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
    switch(choice){
        case 1:{
            if (Min>450){
                temp=(Min-450)*XtrMinA;
                cout<<"The total amount due for this month is $";
                cout<<temp+PackA<<endl;
            }
            else cout<<"the total amount due is $"<<PackA<<endl;
            break;
        }
        case 2:{
            if (Min>900){
                temp=(Min-900)*XtrMinB;
                cout<<"The total amount due for this month is $";
                cout<<temp+PackB<<endl;
            }
            else cout<<"the total amount due is $"<<PackB<<endl;
            break;
        }
        case 3:{
            cout<<"the total amount due is $"<<PackC<<endl;
            break;
        }
    }

    return 0;
}

