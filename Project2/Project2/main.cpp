/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Project 2 Blackjack
 * Created on February 9, 2015, 6:41 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int rank();
int dRank();
void suite();
//Execution begins here
int main(int argc, char** argv) {
    //set random seed and Declare variables for game
    char restart;
    srand(time(NULL));
    const int SIZE=26,MAX=21;
    int uHand[SIZE];//array for users cards
    int dHand[SIZE];//array for dealers cards
    int bet,choice,uTtl,dTtl=0;
    //Name of game
    cout<<setw(8)<<"Blackjack\n";
    //Ask player to set a bet amount
    cout<<"Please input the initial bet\n";
    cin>>bet;
    ofstream Bets;
    Bets.open("Bet Record.txt");
    Bets<<bet<<" ";
    //Initialize 
    do{
        //deal cards to player
        cout<<"Player 1 cards\n";
        cout<<"Card 1: ";//Card 1
        uHand[0]=rank();//Card 1 rank
        suite();//Card 1 suite
        cout<<"Card 2: ";//Card 2
        uHand[1]=rank();//Card 2 rank
        suite();//Card 2 suite
        cout<<"Use numbers 1-4 for the following decisions:\n";
        cout<<"Hit(1), Stand(2), Double Down(3), or Surrender(4)";
        cin>>choice;
        uTtl=uHand[0]+uHand[1];
        int i=2;
        switch(choice){
            case 1:{//Hit
                char hitAgn;
                do{
                    if(uTtl<MAX){
                        uHand[i]=rank();//Card [i] rank
                        suite();//Card [i] suite
                        cout<<"Hit again?\n'Y'/'N'";
                        cin>>hitAgn;
                        uTtl+=uHand[i];
                        i++;
                        
                    }else if(uTtl=MAX){
                        cout<<"21";
                        break;
                    }
                    else{
                        cout<<"BUST!\n";
                        break;
                    }
                }while(hitAgn=='Y'||hitAgn=='y');
                break;
            }
            case 2:{//Stand
                break;
            }
            case 3:{//Double Down
                bet*=2;
                Bets<<bet<<" ";
                uHand[i]=rank();
                suite();
                uTtl+=uHand[i];
                cout<<"Adjusted bet: "<<bet<<endl;
                if(uTtl>MAX)cout<<"BUST!\n";
                break;
            }
            case 4:{//Surrender
                cout<<"Bet surrendered: "<<bet<<endl;
                bet*=0;
                Bets<<bet<<" ";
                break;
            }
        }
        //Display dealers hand
        for(int i=0;i<SIZE;i++){
            dHand[i]=dRank();
            dTtl+=dHand[i];
            if(dTtl<MAX-1||dTtl>17)
        }
        
        
        cout<<"do you want to start over?\n";
        cout<<"'Y' for Yes || 'N' for No\n";
        cin>>restart;
    }while (restart=='Y'||restart=='y');
    return 0;
}
int rank(){
    int rank;
    rank=rand ()%13+1;
    if (rank==1){
        cout<<"A"<<endl;
        char i;
        do{
           cout<<"Please choose whether 'A' will be 1 or 11.\n";
           cin>>i;
           if(i==1)rank=1;
           else if(i==11)rank=11;
           else cout<<"rank not valid.\n";
        }while(rank=='1'||rank=='11');
    }
    else if (rank==2) cout<<"2";
    else if (rank==3) cout<<"3";
    else if (rank==4) cout<<"4";
    else if (rank==5) cout<<"5";
    else if (rank==6) cout<<"6";
    else if (rank==7) cout<<"7";
    else if (rank==8) cout<<"8";
    else if (rank==9) cout<<"9";
    else if (rank==10) cout<<"10";
    else if (rank==11){
        cout<<"J";
        rank=10;
    }else if (rank==12) {
        cout<<"Q";
        rank=10;
    }else if (rank==13){
        cout<<"K";
        rank=10;
    }
    time_t start=time( 0 );
    while (difftime(time(0),start)<1.0);
    return rank;
}
void suite(){
    int suite;
    string spade="\u2660";
    string club="\u2663";
    string heart="\u2665";
    string diamond="\u2666";
    srand (time(NULL));//Set random number seed
    //Get random suite 
    suite= rand()%4+1;
    if (suite==1) cout<<spade<<endl;
    else if (suite==2) cout<<club<<endl;
    else if (suite==3) cout<<heart<<endl;
    else if (suite==4) cout<<diamond<<endl;
    time_t start=time( 0 );
    while (difftime(time(0),start)<1.0);
}
int dRank(){
    int rank,temp;
    rank=rand ()%13+1;
    if (rank==1){
        cout<<"A"<<endl;
        temp=rand()%2+1;
        if(temp==1)rank=1;
        else if(temp==2)rank=11;
    }
    else if (rank==2) cout<<"2";
    else if (rank==3) cout<<"3";
    else if (rank==4) cout<<"4";
    else if (rank==5) cout<<"5";
    else if (rank==6) cout<<"6";
    else if (rank==7) cout<<"7";
    else if (rank==8) cout<<"8";
    else if (rank==9) cout<<"9";
    else if (rank==10) cout<<"10";
    else if (rank==11){
        cout<<"J";
        rank=10;
    }else if (rank==12) {
        cout<<"Q";
        rank=10;
    }else if (rank==13){
        cout<<"K";
        rank=10;
    }
    time_t start=time( 0 );
    while (difftime(time(0),start)<1.0);
    return rank;
}