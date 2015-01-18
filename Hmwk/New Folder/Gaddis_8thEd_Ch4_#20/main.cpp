/* 
 * File:   main.cpp
 * Author: Steven
 * Purpose: Hmwk to Speed of Sound
 * Created on January 15, 2015, 3:39 PM
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
    float air=1100,water=4900,steel=16400;
    float time,distance;
    short choice;
    cout<<"Select a medium (num 1-3)"<<endl;
    cout<<"1: Air"<<endl;
    cout<<"2: Water"<<endl;
    cout<<"3: Steel"<<endl;
    cin>>choice;
    cout<<fixed<<setprecision(4);
    switch (choice){
        case 1:{
        cout<<"You have selected Air"<<endl;
        cout<<"Please enter a distance (ft)"<<endl;
        cin>>distance;
            if(distance>0){
            time=distance/air*1.0f;
            cout<<"It took sound "<<time<<" seconds to travel";
            cout<<" in Air";
            }
            else cout<<"Input not valid"<<endl;
        break;
        }
        case 2:{
        cout<<"You have selected Water"<<endl;
        cout<<"Please enter a distance (ft)"<<endl;
        cin>>distance;
            if(distance>0){
            time=distance/water*1.0f;
            cout<<"It took sound "<<time<<" seconds to travel";
            cout<<" in Water";
            }
            else cout<<"Input not valid"<<endl;
        break;
        }
        case 3:{
        cout<<"You have selected Steel"<<endl;
        cout<<"Please enter a distance (ft)"<<endl;
        cin>>distance;
            if(distance>0){
            time=distance/steel*1.0f;
            cout<<"It took sound "<<time<<" seconds to travel";
            cout<<" in Steel";
            }
            else cout<<"Input not valid"<<endl;
        break;
        }
    }
    return 0;
}

