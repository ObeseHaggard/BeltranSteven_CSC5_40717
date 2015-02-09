/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Driver's License Exam
 * Created on February 5, 2015, 11:30 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables and arrays for test
    int correct=0,wrong=0;
    const int SIZE=20;
    const char test[SIZE]={'a','d','b','b','c','b','a','b','c','d',//Test
                           'a','c','d','b','d','c','c','a','d','b'};//Answers
    char usrTst[SIZE];//User test answers
    //Ask user for test answers
    for(int i=0;i<SIZE;i++){
        cout<<"Answer for question #"<<i+1;
        cin>>usrTst[i];
        while((usrTst[i]!='a')&&(usrTst[i]!='b')&&//Answer
                (usrTst[i]!='c')&&(usrTst[i]!='d')){//Validation
            cout<<"Answer not valid please choose letters a,b,c,d \n";
            cin>>usrTst[i];
        }
    }
    //Compare results
    for(int i=0;i<SIZE;i++){
        if(usrTst[i]==test[i]){
            correct++;
        }else wrong++;
    }
    //Print the results
    if(correct>=15)cout<<"You passed!\n";
    else cout<<"You failed!\n";
    cout<<"Total Amount Correct: "<<correct<<endl;
    cout<<"Total Amount Incorrect: "<<wrong<<endl;
    for(int i=0;i<SIZE;i++){
        if(usrTst[i]!=test[i]){
            cout<<"Incorrect answer #"<<i+1<<endl;
        }
    }
    return 0;
}

