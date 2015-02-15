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
    //display Name of game
    cout<<"Blackjack\n";
    //Ask player to set a bet amount
    cout<<"Please input the initial bet value\n";
    cin>>fBet;//input starting bet value
    ofstream Bets;//Output object Bets
    Bets.open("Bet Record.txt");//Create and open file "Bet Record.txt"
    Bets<<"PLAYER 1 bet record: \n";//Write string to file
    Bets<<fBet<<" ";//Write initial bet value
    do{//do 
        //Ask for this games bet
        cout<<"input single game bet value: ";
        cin>>bet;//input single game bet 
        //deal cards to player
        cout<<"Player 1 cards\n";
        cout<<"Card 1: ";//display Card 1
        uHand[0]=rank();//call function rank() for Card 1 rank
        suite();//call function suite() for Card 1 suite
        cout<<"Card 2: ";//display Card 2
        uHand[1]=rank();//call function rank() for  Card 2 rank
        suite();//call function suite() for Card 2 suite
        uTtl=uHand[0]+uHand[1];//Add up users 2 cards
        int i=2;//initialize temp value "i" to 2
        cout<<"Use numbers 1-4 for the following decisions:\n";//Display user 
        cout<<"Hit(1), Stand(2), Double Down(3), or Surrender(4)";//^ options
        cin>>choice;//get choice
        switch(choice){
            case 1:{//Hit
                char hitAgn;
                do{//do
                    if(uTtl>MAX){//if user total greater than 21
                        cout<<"BUST!\n";//display bust
                        hitAgn='n';//exit do while loop
                    }
                    if(uTtl<MAX){//if user total value less than MAX
                        uHand[i]=rank();//call function rank() for Card [i] rank
                        suite();//call function suite() for Card [i] suite
                        cout<<"Hit again?\n'Y'/'N'";//Prompt for input
                        cin>>hitAgn;//input Hit again 
                        uTtl+=uHand[i];//add user total
                        i++;//increment card place variable
                    }
                }while(hitAgn=='Y'||hitAgn=='y');//repeat until set to !'Y'
                break;
            }
            case 2:{//Stand
                break;
            }
            case 3:{//Double Down
                bet*=2;//Multiply game bet by 2
                uHand[i]=rank();//call function rank() for Card [i] rank
                suite();//call function suite() for Card [i] suite
                uTtl+=uHand[i];//add user total
                cout<<"Adjusted bet: "<<bet<<endl;//display adjusted bet
                //if user total greater than 21, display BUST
                if(uTtl>MAX)cout<<"BUST!\n";
                break;
            }
            case 4:{//Surrender
                cout<<"Bet surrendered: "<<bet<<endl;//display bet surrendered
                uTtl=0;//set user total to lose
                break;
            }
        }
        //Display dealers hand
        //Set dealers total to 0
        dTtl=0;
        //for(assign initial values;i less than SIZE;increment i)
        for(i=0;i<SIZE;i++){
            dHand[i]=dRank();//call function rank() for Card [i] rank
            suite();//call function suite() for Card [i] suite
            dTtl+=dHand[i];//add dealer total
            if(dTtl<=MAX&&dTtl>17) i=SIZE;//if dealer total between 21-17 STOP;
            else if (dTtl>MAX){ //if dealer total over MAX then STOP;
                i=SIZE;
            }
        }
        //if dealers total less than or equal to 21 and greater than user total
        //or user total greater than 21.
        if(dTtl<=MAX&&dTtl>uTtl||uTtl>MAX){
            fBet-=bet;//subtract game bet from bet collective
            Bets<<fBet<<" ";//write bets to file
            cout<<"Dealer wins\n";//display dealer wins
            //display remaining bet value
            cout<<"remaining bet value: "<<fBet<<endl;
        }
        //else if user total less than or equal to 21 and greater than dealer total
        //or dealer total greater than 21
        else if(uTtl<=MAX&&uTtl>dTtl||dTtl>MAX){
            fBet+=bet;//add bet to bet collective
            Bets<<fBet<<" ";//write bets to file
            cout<<"Player wins\n";//display player wins
            //display remaining bet value
            cout<<"remaining bet value: "<<fBet<<endl;
        }
        //else if user total and dealer total are equal or both players BUST
        else if((uTtl==dTtl)||(dTtl&&uTtl>MAX)){
            cout<<"Draw\n";//display draw
            Bets<<fBet<<" ";//write bets to file
            //display remaining bet value 
            cout<<"remaining bet value: "<<fBet<<endl;
        }
        //if bet value less than or equal to 0
        if(fBet<=0){
            //display player loses and exit timer
            cout<<"Player lost initial bet money.\nPlayers loses\n";
            cout<<"Program will exit in 5 seconds\n";
            time_t start=time( 0 );//set start time to 0
            while (difftime(time(0),start)<5.0);//while difftime less than 5
            Bets.close();//close file 
            return 0;
        }
        
        
        cout<<"do you want to start over?\n";
        cout<<"'Y' for Yes || 'N' for No\n";
        cin>>restart;
    }
    //while restart =='y'
    while (restart=='Y'||restart=='y');
    Bets.close();//close file
    return 0;
    //exit stage right
}
//function rank
int rank(){
    int rank;//declare function variable
    rank=rand ()%13+1;//assign rank to random digit 1-13
    if (rank==1){//if rank=1
        cout<<"A"<<endl;//display A
        int i;//declare option variable
        do{//do 
            //display options
            cout<<"Please choose whether 'A' will be 1 or 11.\n";
            cin>>i;//input options
            if(i=11)rank=11;//if options equal 11, set rank to 11
            else if(i=1)rank=1;//else if options equal 1,set rank to 1
            else cout<<"rank not valid.\n";//else display options not valid
        }while((rank!=1)||(rank!=11));//while rank is equal to 1 or 11
    }
    else if (rank==2) cout<<"2";//else if rank equal to 2, display 2
    else if (rank==3) cout<<"3";//else if rank equal to 2, display 2
    else if (rank==4) cout<<"4";//else if rank equal to 2, display 2
    else if (rank==5) cout<<"5";//else if rank equal to 2, display 2
    else if (rank==6) cout<<"6";//else if rank equal to 2, display 2
    else if (rank==7) cout<<"7";//else if rank equal to 2, display 2
    else if (rank==8) cout<<"8";//else if rank equal to 2, display 2
    else if (rank==9) cout<<"9";//else if rank equal to 2, display 2
    else if (rank==10) cout<<"10";//else if rank equal to 2, display 2
    else if (rank==11){//else if rank equal to 11,
        cout<<"J";//display rank 'J'
        rank=10;//set rank to 10
    }else if (rank==12){//else if rank equal to 12,
        cout<<"Q";//display rank 'Q'
        rank=10;//set rank to 10
    }else if (rank==13){//else if rank equal to 13,
        cout<<"K";//display rank 'K'
        rank=10;//set rank to 10
    }
    time_t start=time( 0 );//set start to time
    while (difftime(time(0),start)<1.0);//while difftime less than 1
    return rank;//return rank value
    //exit function
}
//function suite
void suite(){
    int suite;//declare suite variable
    string spade="\u2660";//set string spade to unicode u2660
    string club="\u2663";//set string club to unicode u2663
    string heart="\u2665";//set string heart to unicode u2665
    string diamond="\u2666";//set string diamond to unicode u2666
    srand (time(NULL));//Set random number seed
    //Get random suite 
    suite= rand()%4+1;//suite set to random between 1-4
    //if suite equal to 1 display spade
    if (suite==1) cout<<spade<<endl;
    //else if suite equal to 2 display club
    else if (suite==2) cout<<club<<endl;
    //else if suite equal to 3 display heart
    else if (suite==3) cout<<heart<<endl;
    //else if suite equal to 4 display diamond
    else if (suite==4) cout<<diamond<<endl;
    time_t start=time( 0 );//set start to time
    while (difftime(time(0),start)<1.0);//while difftime less than 1
    //exit function
}
//function dRank
int dRank(){
    int rank,temp;//declare function variables
    rank=rand ()%13+1;//assign random value between 1-13 to rank
    if (rank==1){//if rank equals 1
        cout<<"A"<<endl;//display 'A'
        temp=rand()%2+1;//assign temp to random of either 1 or 2
        if(temp==1)rank=1;//if temp equals 1, set rank to 1
        else if(temp==2)rank=11;//else if temp equals 2, set rank to 11
    }
    else if (rank==2) cout<<"2";//else if rank equal to 2, display 2
    else if (rank==3) cout<<"3";//else if rank equal to 2, display 2
    else if (rank==4) cout<<"4";//else if rank equal to 2, display 2
    else if (rank==5) cout<<"5";//else if rank equal to 2, display 2
    else if (rank==6) cout<<"6";//else if rank equal to 2, display 2
    else if (rank==7) cout<<"7";//else if rank equal to 2, display 2
    else if (rank==8) cout<<"8";//else if rank equal to 2, display 2
    else if (rank==9) cout<<"9";//else if rank equal to 2, display 2
    else if (rank==10) cout<<"10";//else if rank equal to 2, display 2
    else if (rank==11){//else if rank equal to 11,
        cout<<"J";//display rank 'J'
        rank=10;//set rank to 10
    }else if (rank==12){//else if rank equal to 12,
        cout<<"Q";//display rank 'Q'
        rank=10;//set rank to 10
    }else if (rank==13){//else if rank equal to 13,
        cout<<"K";//display rank 'K'
        rank=10;//set rank to 10
    }
    time_t start=time( 0 );//set start to time
    while (difftime(time(0),start)<1.0);//while difftime less than 1
    return rank;//return rank
    //exit function
}