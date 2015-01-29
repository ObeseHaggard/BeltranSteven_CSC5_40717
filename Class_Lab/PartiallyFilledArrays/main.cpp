/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 29, 2015, 9:21 AM
 */

//System Libraries
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

//User Libraries

//Global Constants
const int COL=700;

//Function Prototype
void filArray(int [],int);
void filArray(vector<int> &,int);
void filArray(int [][COL],int,int);
void prntAry(int [],int,int);
void prntAry(const vector<int> &,int,int);
void prntAry(const int[][COL],int,int);
int main(int argc, char** argv) {
    //Seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    //Declare variables and arrays
    const int ROW=200;
    int pfillCol=10,pfillRow=50,perLine=20;
    int array[COL]={};
    int array2D[ROW][COL];
    vector<int> varray(COL,0);
    //Fill the Array
    filArray(array,pfillCol);
    filArray(varray,pfillCol);
    filArray(array2D,pfillRow,pfillCol);
    //print the array
    prntAry(array,pfillCol,perLine);
    prntAry(varray,pfillCol,perLine);
    prntAry(array2D,pfillRow,pfillCol);
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
//randomly fill a vector with 2-digit numbers
void filArray(vector <int> &a,int n){
    cout<<endl;
    for(int i=0;i<n;i++){
        a[i]=rand()%90+10;
    }
    cout<<endl;
}
//print perLine columns for the vector output by row
void prntAry(const vector<int> &a,int n,int perLine){
    cout<<endl;
        for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
        }
    cout<<endl;
}
//Randomly fill a 2 dimensional array
void filArray(int a[][COL],int r,int c){
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            a[row][COL]=rand()%90+10;
        }
    }
}
//Print a 2 dimensional array
void prntAry(const int a[][COL],int r,int c){
    cout<<endl;
    for(int row=0;row<r;row++){
        for(int col=0;col<c;col++){
            cout<<a[row][COL]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}