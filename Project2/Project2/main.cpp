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
    int fBet,bet,choice,uTtl,dTtl=0;
    //Name of game
    cout<<setw(8)<<"Blackjack\n";
    //Ask player to set a bet amount
    cout<<"Please input the initial bet value\n";
    cin>>fBet;
    ofstream Bets;//Output object
    Bets.open("Bet Record.txt");//Create and open file "Bet Record.txt"
    Bets<<"PLAYER 1 bet record: \n";//Write string to file
    Bets<<fBet<<" ";//Write initial bet value
    do{//Initialize and repeat game
        //Ask for this games bet
        cout<<"input single game bet value: ";
        cin>>bet;
        //deal cards to player
        cout<<"Player 1 cards\n";
        cout<<"Card 1: ";//Card 1
        uHand[0]=rank();//Card 1 rank
        suite();//Card 1 suite
        cout<<"Card 2: ";//Card 2
        uHand[1]=rank();//Card 2 rank
        suite();//Card 2 suite
        cout<<"Use numbers 1-4 for the following decisions:\n";//Display user 
        cout<<"Hit(1), Stand(2), Double Down(3), or Surrender(4)";//^ options
        cin>>choice;//get choice
        uTtl=uHand[0]+uHand[1];//Add up users 2 cards
        int i=2;//initialize temp value "i" to 2
        switch(choice){
            case 1:{//Hit
                char hitAgn;
                do{//execute give card if statements while...
                    if(uTtl<MAX){//if user total value less than MAX
                        uHand[i]=rank();//Card [i] rank
                        suite();//Card [i] suite
                        cout<<"Hit again?\n'Y'/'N'";//Prompt for input
                        cin>>hitAgn;//input Hit again 
                        uTtl+=uHand[i];//add user total
                        i++;//increment card place variable
                        
                    }else if(uTtl=MAX){//if user total equal to 21
                        cout<<"21";//display 21
                        break;
                    }
                    else{
                        cout<<"BUST!\n";
                        break;
                    }
                }while(hitAgn=='Y'||hitAgn=='y');//repeat until set to !'Y'
                break;
            }
            case 2:{//Stand
                break;
            }
            case 3:{//Double Down
                bet*=2;//Multiply game bet by 2
                uHand[i]=rank();
                suite();
                uTtl+=uHand[i];
                cout<<"Adjusted bet: "<<bet<<endl;
                if(uTtl>MAX)cout<<"BUST!\n";
                break;
            }
            case 4:{//Surrender
                cout<<"Bet surrendered: "<<bet<<endl;
                uTtl=0;
                break;
            }
        }
        //Display dealers hand
        //Set dealers total to 0
        dTtl=0;
        for(int i=0;i<SIZE;i++){//AI logic
            dHand[i]=dRank();
            suite();
            dTtl+=dHand[i];
            if(dTtl<=MAX&&dTtl>17) i=SIZE;//if dealer total between 21-17 STOP;
            else if (dTtl>MAX){ //if dealer total over MAX then STOP;
                i=SIZE;
            }
        }
        if(dTtl<=MAX&&dTtl>uTtl||uTtl>MAX){
            fBet-=bet;
            Bets<<fBet<<" ";
            cout<<"Dealer wins\n";
            cout<<"remaining bet value: "<<fBet<<endl;
        }else if(uTtl<=MAX&&uTtl>dTtl||dTtl>MAX){
            fBet+=bet;
            Bets<<fBet<<" ";
            cout<<"Player wins\n";
            cout<<"remaining bet value: "<<fBet<<endl;
        }else if(uTtl==dTtl){
            cout<<"Draw\n";
            cout<<"remaining bet value: "<<fBet<<endl;
        }
        if(fBet<=0){
            cout<<"Player lost initial bet money.\nPlayers loses\n";
            cout<<"Program will exit in 5 seconds\n";
            time_t start=time( 0 );
            while (difftime(time(0),start)<5.0);
            Bets.close();
            return 0;
        }
        
        
        cout<<"do you want to start over?\n";
        cout<<"'Y' for Yes || 'N' for No\n";
        cin>>restart;
    }while (restart=='Y'||restart=='y');
    Bets.close();
    return 0;
}
int rank(){
    int rank;
    rank=rand ()%13+1;
    if (rank==1){
        cout<<"A"<<endl;
        char i,i2;
        do{
           cout<<"Please choose whether 'A' will be 1 or 11.\n";
           cin>>i>>i2;
           if((i='1')&&(i2='1'))rank=11;
           else if(i='1')rank=1;
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