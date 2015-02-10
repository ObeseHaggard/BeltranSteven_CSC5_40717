/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Problem 6 on midterm
 * Created on February 10, 2015, 8:52 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
int coltzSq(int);
int cltzRng(int&,int&);

//Execution begins here

int main(int argc, char** argv) {
    //Test the function out
    int i=10,j=1,max;
    //Run the function and output the results
    max=cltzRng(i,j);
    cout<<i<<" "<<j<<" "<<max<<endl;
    return 0;
}
int coltzSq(int n){
    //Declare a counter
    int count=1;
    do{
        if(n%2)n=n+1+(n<<1);
        else n>>=1;
        count++;
    }while(n>1);
    return count;
}
int cltzRng(int &strt,int &end){
    //Reorient strt and end based upon the inputs not being ordered.
    //In other words swap if you need to;
    if (strt>end){
        int temp=strt;
        strt=end;
        end=temp;
    }
    //Declare the maximum length
    int max=coltzSq(strt);
    for(int i=strt;i<=end;i++){
        int temp=coltzSq(i);
        if(temp>max)max=temp;
    }
    return max;
}