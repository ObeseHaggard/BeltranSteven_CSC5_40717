/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Program #4 to final
 * Created on February 15, 2015, 11:39 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int retrand(short int [],int [],int,int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    srand(time(NULL));
    const int n=5,ntimes=10000;
    int freq[n]={0};
    short int rndseq[]={8,51,78,111,121};
    //call function and loop
    retrand(rndseq,freq,n,ntimes);
    for(int i=0;i<n;i++){
    cout<<rndseq[i]<<" occurred "<<freq[i]<<" times"<<endl;
    }
    return 0;
}
int retrand(short int seq[],int freq[],int n,int ntimes){
    for(int i=0;i<=ntimes;i++){
        int r=rand()%5;
        if (r==0)freq[r]+=1;
        else if (r==1)freq[r]+=1;
        else if (r==2)freq[r]+=1;
        else if (r==3)freq[r]+=1;
        else if (r==4)freq[r]+=1;
    }
}