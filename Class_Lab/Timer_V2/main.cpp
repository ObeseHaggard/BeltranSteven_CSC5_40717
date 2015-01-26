 /* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Created on January 26, 2015, 10:05 AM
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
    //Initialize the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare 2 variables
    unsigned int x,y,begTime,endTime,answer,ttlTime;
    //Randomly choose 2 digits for each
    x=rand()%90+10;
    y=rand()%90+10;
    ttlTime=10;
    begTime=static_cast<unsigned int>(time(0));
    //Prompt user for an answer
    cout<<"What is "<<x<<" + "<<y<<endl;
    cout<<"You have "<<ttlTime<<" seconds to answer.\n";
    cin>>answer;
    endTime=static_cast<unsigned int>(time(0));
    //Determine if correct
    if(ttlTime>endTime-begTime){
        if(answer==(x+y))cout<<"You are Correct\n";
        else cout<<"You are Wrong!\n";
    }else{
        cout<<"You took too much time!\n";
        cout<<"Time allowed = "<<ttlTime<<endl;
        cout<<"Your time = "<<endTime-begTime<<endl;
    }
    //Exit stage right
    return 0;
}

