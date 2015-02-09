/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Lottery Application
 * Created on February 8, 2015, 8:23 PM
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    const int SIZE=5;
    int lottery[SIZE];
    char input[SIZE];
    int user[SIZE];
    srand(time(NULL));
    for(int i=0;i<SIZE;i++){
        lottery[i]=rand()%9+1;
    }
    cout<<"Please enter 5 digits for the lottery.\n";
    cin>>input[0]>>input[1]>>input[2]>>input[3]>>input[4];
    for(int i=0;i<SIZE;i++){
        user[i]=input[i]-48;
        cout<<user[i]<<endl;
    }
    for(int i=0;i<SIZE;i++){
        cout<<lottery[i];
    }
    cout<<"\n*****"<<endl;
    for(int i=0;i<SIZE;i++){
        if(user[i]==lottery[i])cout<<user[i];
        else cout<<" ";
    }
    if(user[0]==lottery[0]&&user[1]==lottery[1]&&user[2]==lottery[2]&&
            user[3]==lottery[3]&&user[4]==lottery[4]){
        cout<<"\nYou are a GRAND PRIZE WINNER!";
    }
    return 0;
}

