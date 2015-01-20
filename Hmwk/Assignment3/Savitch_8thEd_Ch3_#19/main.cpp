/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Created on January 20, 2015, 10:30 AM
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
    char tPick=23;
    bool computer;
    short nPckRmv;
    //Playing the game
    do{
        //Designate the player
        computer=false;
        //Ask player how many tooth picks
        do{
        cout<<"There are "<<static_cast <int>(tPick)<<" left to remove"<<endl;
        cout<<"How many tooth picks do you want to remove"<<endl;
        cout<<"Choose 1, 2, or 3"<<endl;
        cin>>nPckRmv;
        }while(nPckRmv<=0||nPckRmv>=4||nPckRmv>tPick);
        //Remove the number of tooth picks
        tPick-=nPckRmv;
        //Designate the computer
        computer=true;
        //Utilize logic from the book
        if(tPick>4){
            nPckRmv=4-nPckRmv;
            tPick-=nPckRmv;
        }else if(tPick>=2&&tPick<=4){
            tPick=1;
        }else if(tPick==1){
            tPick=0;
            computer=false;
        }
    }while(tPick>1);
    
    //Output the winner and loser
    if(computer){
        cout<<"Computer wins, you lose"<<endl;
    }else{
        cout<<"Computer loses, we win"<<endl;
    }
    //Exit the game
    return 0;
}

