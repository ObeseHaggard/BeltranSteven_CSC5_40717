/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Program #2 to final
 * Created on February 14, 2015, 10:09 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    signed short guess,input;
    srand(time(NULL));//assign time to null
    guess=rand()%500+1;//give guess between 1-500
    do{
        //Display name of game and rules
        cout<<"Guess the Number\nI have a number between 1 and 500.\n";
        cout<<"Can you guess my number? You will be\ngiven a maximum of 9 guesses.";
        //ask user for up to 9 guesses
        for(int i=0;i<=9;i++){
            if(i==9){
                cout<<"Too many tries.\n Would you like to play again(y or n)?\n";
                cin>>choice;
            }else{
                cout<<"Please type your guess\n";
                cin>>input;
                if(input<guess){
                    cout<<"Too low. Try again.\n";
                }
                else if(input>guess){
                    cout<<"Too high. Try again.\n";
                }
                else if(input==guess){
                    cout<<"Congratulations, you guessed the number!\n Would you like";
                    cout<<" to play again(y or n)?\n";
                    i=9;
                    cin>>choice;
                }
            }
        }
    }while(choice=='y'||choice=='Y');
    return 0;
}

