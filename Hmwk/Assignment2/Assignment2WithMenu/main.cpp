/* 
 * File:   main.cpp
 * Author: Steven  Beltran
 * Purpose: How to make a menu
 * Created on January 14, 2015, 11:01 AM
 */

//System Library
#include <cstdlib>//Random rand(),srand ()
#include <iostream>// Keyboard/Monitor I/O
#include <fstream>//File I/O
#include <ctime>// Time functions
#include <cmath>//Math functions library
#include <iomanip>//Format library
using namespace std;

//User Libraries

//Global Constants
const float CMTNONS=3.527392e4;//Conversion from metric ton to ounces
const int PI=3.14159;//PI in inches
const float PIDIV4=atan(1);//PI/4=atan(1)
const float CNVDGRD=PIDIV4*4/180;//PI/4/45 is the same conversion
//Function Prototypes
int main(int argc, char** argv) {
    //Assignment 2 menu
    cout<<"Solution 1: Savitch 8thEd Chap 2 Problem 1"<<endl;
    cout<<"Solution 2: Savitch 8thEd Chap 2 Problem 12"<<endl;
    cout<<"Solution 3: Gaddis 8thEd Chap 3 Problem 13"<<endl;
    cout<<"Solution 4: Gaddis 8thEd Chap 3 Problem 19"<<endl;
    cout<<"Solution 5: Gaddis 8thEd Chap 3 Problem 20"<<endl;
    cout<<"Solution 6: Gaddis 8thEd Chap 3 Problem 21"<<endl;
    cout<<"Solution 7: Gaddis 8thEd Chap 3 Problem 22"<<endl;
    cout<<"Solution 8: Gaddis 8thEd Chap 3 Problem 23"<<endl;
    cout<<"Solution 9: Gaddis 8thEd Chap 3 Problem 24"<<endl;
    cout<<"Input which solution you would like to see"<<endl;
    int choice;
    cin>>choice;
    //Based upon the choice, display the results
    switch(choice){
        case 1:{
            cout<<"you have choosen Solution 1"<<endl;
                //Declare variables
                float wtPackOz;// Weight of cereal in ounces
                float wtPackTn;//Weight of cereal in metric tons
                float nPackTn;//Number of packages per metric ton
                //Prompt user for cereal weights.
                cout<<"Input the number of ounces on the cereal box"<<endl;
                cout<<"box to convert to metric tons."<<endl;
                cout<<"Format is float ddd.ddd (ounces)"<<endl;
                cin>>wtPackOz;
                //Calculate the results
                wtPackTn=wtPackOz/CMTNONS;
                nPackTn=1/wtPackTn;
                //Output the results
                cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons)y"<<endl;
                cout<<"Number of cereal boxes in a metric ton ="<<nPackTn<<endl;
                //Ask if user would like to repeat the calculation
                cout<<"Would you like to repeat the calculation?"<<endl;
                cout<<"Or make a new calculatioin?"<<endl;
                cout<<"Type Y for yes and N for no."<<endl;
                char answer;
                cin>>answer;
                if(answer=='Y'||answer=='y') {
                    //Prompt user for cereal weights.
                    cout<<"Input the number of ounces on the cereal box"<<endl;
                    cout<<"box to convert to metric tons."<<endl;
                    cout<<"Format is float ddd.ddd (ounces)"<<endl;
                    cin>>wtPackOz;
                    //Calculate the results
                    wtPackTn=wtPackOz/CMTNONS;
                    nPackTn=1/wtPackTn;
                    //Output the results
                    cout<<"Weight of cereal box is "<<wtPackTn;
                    cout<<"(metric tons"<<endl;
                    cout<<"Number of cereal boxes in a metric ton ="<<nPackTn<<endl;
            break;
             }
        case 2:{
            cout<<"you have choosen Solution 2"<<endl;
                //Declare variables
                float number,guess,r;
                //Input a number
                cout<<"Input a number to estimate it's square root"<<endl;
                cout<<"The format will be a positive float"<<endl;
                cin>>number;
                //First pass
                guess=number/2;
                r=number/guess;
                guess=(guess+r)/2;
                //Output the result
                cout<<"First pass Calculation -> "<<guess<<endl;
                //second pass
                r=number/guess;
                guess=(guess+r)/2;
                //Output the second pass
                cout<<"Second pass Calculation -> "<<guess<<endl;
               //Third pass
                r=number/guess;
                guess=(guess+r)/2;
                //Output the Third pass
                cout<<"Third pass Calculation -> "<<guess<<endl;
                //Fourth pass
                r=number/guess;
                guess=(guess+r)/2;
                //Output the fourth pass
                cout<<"Fourth pass Calculation -> "<<guess<<endl;
                //Fifth pass
                r=number/guess;
                guess=(guess+r)/2;
                //Output the fifth pass
                cout<<"Fifth pass Calculation -> "<<guess<<endl;
            break;
             }
        case 3:{
            cout<<"you have choosen Solution 3"<<endl;
                //Declare variables and initialize
                float bcToDlr=232.8;  //Jan 13th,  2015 10:17am
                float erToDlr=0.849381;//Same Date^
                float ynToDlr=118.03;  //Same Date^^
                float bitcoin, dollars, euros, yen;
                //Input the number of bitcoins and then convert
                cout<<"Input the number of bitcoin "<<endl;
                cout<<"You wish to purchase."<<endl;
                cin>>bitcoin;
                //Convert to all the currencies
                dollars=bcToDlr*bitcoin;
                euros=erToDlr*dollars;
                yen=ynToDlr*dollars;
                //Output the results
                cout.setf(ios::fixed);
                cout.precision(2);
                cout<<bitcoin<<" = "<<dollars<<"(dollars)"<<endl;
                cout<<bitcoin<<" = "<<euros<<"(euros)"<<endl;
                cout<<bitcoin<<" = "<<yen<<"(yen)"<<endl;
            break;
             }
        case 4:{
            cout<<"you have choosen Solution 4"<<endl;
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
            break;
             }
        case 5:{
            cout<<"you have choosen Solution 5"<<endl;
                //Declare constants and variables
                const float SLICE=14.125;//1 slice in inches
                unsigned short DPizza;
                cout<<"What is the Diameter of the pizza? (in inches)"<<endl;
                cin>>DPizza;
                //Calculate the number of slices
                float NSlice, Area, Radius;
                Radius=DPizza/2.0f;
                Area=PI*(Radius*Radius);
                NSlice=Area/SLICE;
                //Output the number of slices
                cout<<fixed<<setprecision (1);
                cout<<"The number of slices is "<<NSlice;
                cout<<" for a "<<DPizza<<" inch pizza"<<endl;
            break;
             }
        case 6:{
            cout<<"you have choosen Solution 6"<<endl;
                //Declare constants and variables
    const float SLICE=14.125;//1 slice in inches
    float DPizza;// Diameter of pizza in inches
    float NPeople;//Number of people 
    //Ask user for Diameter of pizza and number people
    cout<<"What is the Diameter of the pizza? (in inches)"<<endl;
    cin>>DPizza;
    cout<<"Number of people attending?"<<endl;
    cin>>NPeople;
    //Calculate the number of slices per pizza
    float NSlice, Area, Radius;
    Radius=DPizza/2.0f;
    Area=PI*(Radius*Radius);
    NSlice=Area/SLICE;
    //Calculate number of pizza needed for (number) of people
    float NPizza=4.0f*NPeople/NSlice;
    //Output the number of pizza needed
    cout<<fixed<<setprecision (1);
    cout<<"The number of pizza need to be ordered "<<NPizza;
    cout<<" for "<<NPeople<<" people"<<endl;
    cout<<NSlice<<" slices per pizza"<<endl;
            break;
             }
        case 7:{
            cout<<"you have choosen Solution 7"<<endl;
                //Declare a file object
                ofstream output;
                //Open the file
                output.open("SinCosTan.dat");
                //Declare the angle variable as an integer in
                //in degrees, and the radian angle as a float
                int angDeg=rand()%361-180;//Angle [-180,180]
                float angRad=angDeg*CNVDGRD;
                //Output the angle to the screen
                output<<"Angle in degrees => "<<angDeg<<endl;
                output<<"Angle in radians => "<<angRad<<endl;
                //Output the sin,cos,tan
                output<<fixed<<setprecision(4)<<showpoint;
                output<<"sin("<<angDeg<<") = "<<setw(8)<<sin(angRad)<<endl;
                output<<"cos("<<angDeg<<") = "<<setw(8)<<cos(angRad)<<endl;
                output<<"tan("<<angDeg<<") = "<<setw(8)<<tan(angRad)<<endl;
                //Close the stream
                output.close();
            break;
             }
        case 8:{
            cout<<"you have choosen Solution 8"<<endl;
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
                cout<<"Joe paid $"<<BrkrB<<" to Stock Broker for purchase"<<endl;
                cout<<"Joe then sold his stock for $"<<AmtSl<<endl;
                cout<<"Joe paid $"<<BrkrA<<" to his Broker for stock sold"<<endl;
                cout<<"Joe made a profit of $"<<AmtSl-AmtPaid-BrkrB-BrkrA<<endl;
                //Exit 
            break;
             }
        case 9:{
            cout<<"you have choosen Solution 9"<<endl;
                //Declare variables
                string Name,City,Age,College,Profession,Animal,Petname;
                //Ask for input
                cout<<"Please enter the following details:"<<endl;
                cout<<"Your First Name"<<endl;
                getline(cin, Name);
                cout<<"Your Age"<<endl;
                getline(cin, Age);
                cout<<"Name of a City"<<endl;
                getline(cin, City);
                cout<<"Name of a College"<<endl;
                getline(cin ,College);
                cout<<"A Profession"<<endl;
                getline(cin, Profession);
                cout<<"A Type of Animal"<<endl;
                getline(cin, Animal);
                cout<<"A Pet's Name"<<endl;
                getline(cin, Petname);
                //Output the Story
                cout<<"There once was a person named "<<Name;
                cout<<" who lived in "<<City<<"."<<endl;
                cout<<"At the age of "<<Age<<", "<<Name;
                cout<<" went to college at "<<College<<". ";
                cout<<Name<<" graduated and went to work as a ";
                cout<<Profession<<". "<<"Then, "<<Name<<" adopted a(n) ";
                cout<<Animal<<" named "<<Petname<<". ";
                cout<<"They both lived happily ever after!"<<endl;
            break;
             }
        }
    }
    return 0;
}

