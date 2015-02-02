/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 2, 2015, 9:59 AM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

//User Libraries

//Global Constants

//Function Prototype
void filArray(int [],int);
void prntAry(int [],int,int);
int lSearch (int,int[],int,int);
void fndVals(int [],int, int[]);

//Execution begins here
int main(int argc, char** argv) {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int ROW=100;
    int pfillRow=50,perLine=10;
    int array[ROW]={};
    int found[ROW]={};
    //Fill the Array
    filArray(array,pfillRow);
    //print the array
    prntAry(array,pfillRow,perLine);
    //Test the linear search
    int val=50;
    fndVals(array,pfillRow,val,found);
    //Print all the values
    prntArray(found,pfillRow,perLine);
    return 0;
}
//randomly fill the array with 2-digit numbers
void filArray(int a[],int n){
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
}
//print perLine columns for the array output by row
void prntAry(int a[],int n,int perLine){
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
        }
}
int lSearch (int posStrt,int a[],int n,int val){
    //Loop until you find
    for (int indx=posStrt;indx<n;indx++){
        if(val==a[indx])return indx;
    }
    return -1;
}
void fndVals(int a[],int n,int val, int f[]){
    //Loop until you find all the elements in the array
    int indx,pos=0,count=0;
    do{
       indx=lSearch(pos,a,n,val);
       f[count++]=indx;
       pos=indx++;
    }while(indx>0&&indx<n);
}