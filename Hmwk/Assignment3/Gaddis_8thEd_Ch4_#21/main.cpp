/* 
 * File:   main.cpp
 * Author: Steven
 * Purpose: Hmwk to Speed of Sound in Gases
 * Created on January 15, 2015, 3:39 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>

using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float CO2=258.0, Air=331.5, H=1270.0, He=972.0;
    short choice, seconds,temp;
    float dist;
    cout<<"Please choose a medium:"<<endl;
    cout<<"1: Carbon Dioxide"<<endl;
    cout<<"2: Air"<<endl;
    cout<<"3: Helium"<<endl;
    cout<<"4: Hydrogen"<<endl;
    cin>>choice;
    temp=choice;
    cout<<"Please input the number (1-30) of seconds it took for the sound to ";
    cout<<"travel in this medium from its source to the location that it ";
    cout<<"detected.";
    cin>>seconds;
    switch (choice){
        case 1:{

            if((seconds>=1)&&(seconds<=30)){
                if(temp=1){
                dist=seconds*CO2;
                cout<<"The source is "<<dist;
                cout<<"(ft) away from the detection location."<<endl;
                }
            }
        else cout<<"Input not valid"<<endl;
        break;
        }
        case 2:{

            if((seconds>0)&&(seconds<30)){
                if(temp=2){
                dist=seconds*Air;
                cout<<"The source is "<<dist;
                cout<<"(ft) away from the detection location."<<endl;
                }
            }
        else cout<<"Input not valid"<<endl;
        break;
        }
        case 3:{

            if((seconds>0)&&(seconds<30)){
                if(temp=3){
                dist=seconds*He;
                cout<<"The source is "<<dist;
                cout<<"(ft) away from the detection location."<<endl;
                }
            }
        else cout<<"Input not valid"<<endl;
        break;
        }
        case 4:{

            if((seconds>0)&&(seconds<30)){
                if(temp=4){
                dist=seconds*H;
                cout<<"The source is "<<dist;
                cout<<"(ft) away from the detection location."<<endl;
                }
            }
        else cout<<"Input not valid"<<endl;
        break;
        }
        default:{ cout<<endl<<"Input not valid"<<endl;}
    }
    return 0;
}

