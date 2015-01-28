/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 28, 2015, 7:57 AM
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
    float AmtDue,PackA=19.99,PackB=24.95,PackC=69.99,XtrMinA=0.45,XtrMinB=0.40;
    float XtraAmt,TtlAmt;
    cout<<"This Program calculates a customer's monthly bill"<<endl;
    cout<<"Please choose an ISP package (num 1-3)"<<endl;
    cout<<"1. Package A: $19.99 per month for 5 hours access."<<endl;
    cout<<"Additional hours are $0.75 per minute up to 20 hours then $1 for ";
    cout<<"all additional hours."
    cout<<"2. Package B: $24.95 per month for 15 hours access."<<endl;
    cout<<"Additional hours are $0.75 per minute up to 25 hours then $0.50 for";
    cout<<" all additional hours."
    cout<<"3. Package C: $29.75 per month for unlimited access."<<endl;
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