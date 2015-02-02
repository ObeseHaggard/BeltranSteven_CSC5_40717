/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Created on January 31, 2015, 9:15 PM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void hand ();

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables for initial game startup
    char suite,rank,card1,card2,dealer,restart,hitAgn;
    int bet,temp=0,choice;
    
    do{
        //Name of game
        cout<<setw(8)<<"Blackjack\n";
        //Ask player to set a bet amount
        cout<<"Please input the initial bet\n";
        cin>>bet;        
        //deal cards to player
        cout<<"Player 1 cards\n";
        cout<<"Card 1:";
        hand();
        time_t start=time( 0 );
        while (difftime(time(0),start)<1.0);
        cout<<"Card 2:";
        hand();
        cout<<"Use numbers 1-4 for the following decisions:\n";
        cout<<"Hit(1), Stand(2), Double Down(3), or Surrender(4)";
        cin>>choice;
        switch(choice){
            case 1:{
                do{
                    hand();
                    cout<<"Hit again?\n'Y'/'N'";
                    cin>>hitAgn;
                }while(hitAgn=='Y'||hitAgn=='y');
            }
            case 2:{
                //End Players turn
            }
            case 3:{
                bet*=2;
                hand
            }
        }
        
        
        
        cout<<"do you want to start over?\n";
        cout<<"'Y' for Yes || 'N' for No\n";
        cin>>restart;
    }while (restart=='Y'||restart=='y');
    return 0;
}
void hand (){
    string spade="\u2660";
    string club="\u2663";
    string heart="\u2665";
    string diamond="\u2666";
    srand (time(NULL));//Set random number seed
    //Get random suite 
    int suite= rand()%4+1;
    if (suite==1) cout<<spade;
    else if (suite==2) cout<<club;
    else if (suite==3) cout<<heart;
    else if (suite==4) cout<<diamond;
    srand (time(NULL));//Set random number seed
    int rank=rand ()%13+1;
    if (rank==1) cout<<"A"<<endl;
    else if (rank==2) cout<<"2"<<endl;
    else if (rank==3) cout<<"3"<<endl;
    else if (rank==4) cout<<"4"<<endl;
    else if (rank==5) cout<<"5"<<endl;
    else if (rank==6) cout<<"6"<<endl;
    else if (rank==7) cout<<"7"<<endl;
    else if (rank==8) cout<<"8"<<endl;
    else if (rank==9) cout<<"9"<<endl;
    else if (rank==10) cout<<"10"<<endl;
    else if (rank==11){
        cout<<"J"<<endl;
        rank
    }else if (rank==12) {
        cout<<"Q"<<endl;
    }else if (rank==13){
        cout<<"K"<<endl;
    }
    
}
