/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 28, 2015, 10:27 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
int rollDie(int,int);
//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables
    unsigned int nRolls=2704000,nDie=2,nFace=52;
    const int SIZE=105;//wasted 2 memory positions(0,1)
    int freq[SIZE]={};//Initialized entire array to zero
    int n2,n3,n4,n5,n6,n7,n8,n9,n10,n11,n12;
    n2=n3=n4=n5=n6=n7=n8=n9=n10=n11=n12=0;
    //Take statistics on the random throws
    for(unsigned int roll=1;roll<=nRolls;roll++){
    int toss=rollDie(nDie,nFace);
    freq[toss]++;
    }
    //As a check
    unsigned int tot=0;
    for(int index=2;index<SIZE;index++){
        tot+=freq[index];
        cout<<index<<" occured "<<freq[index]<<" times\n";
    }
    cout<<"The total rolls "<<tot<<" = "<<nRolls<<endl;
    //Exit stage right
    return 0;
}
int rollDie(int nDice, int nFace){
//Declare variables
int sum=0;
for(int roll=1;roll<=nDice;roll++){
sum+=(rand()%nFace+1);
}
return sum;
}