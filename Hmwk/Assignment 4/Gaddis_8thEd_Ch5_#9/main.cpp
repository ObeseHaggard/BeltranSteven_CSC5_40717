/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Hotel Occupancy
 * Created on January 24, 2015, 10:38 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int main(int argc, char** argv) {
    //Declare variables
    int floors, count,rooms,occupied,ttlRms=0,ttlOcpd=0;
    //Ask user for the number of floors of the hotel
    cout<<"This Program calculates the occupancy rate for a hotel\n";
    cout<<"How many floors does the hotel have?";
    cin>>floors;
    while (floors<1){
        cout<<"Please choose a number above 0\n";
        cin>>floors;
    }
    for (count=1;count<=floors;count++){
        if (count<13||count>13){
            cout<<"Floor "<<count<<"\nHow many rooms are in this floor? ";
            cin>>rooms;
            while (rooms<10){
                cout<<"Please choose a number above 10\n";
                cin>>rooms;
            }
            ttlRms+=rooms;
            cout<<"How many rooms are occupied? ";
            cin>>occupied;
            while (occupied>rooms){
                cout<<"Occupied rooms cant exceed rooms on the floor";
                cin>>occupied;
            }
            ttlOcpd+=occupied;
        }else if(count=13){
        }
    }
    cout<<"Total Rooms: "<<ttlRms<<endl;
    cout<<"Total Rooms Occupied: "<<ttlOcpd<<endl;
    cout<<"Total Rooms Unoccupied: "<<ttlRms-ttlOcpd<<endl;
    cout<<"Rooms Occupied in Percentage: "<<ttlOcpd*100.0f/ttlRms<<"%\n";
    return 0;
}

