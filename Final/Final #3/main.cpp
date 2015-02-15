/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Program #3 to Final
 * Created on February 14, 2015, 11:26 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <vector>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
const int COL=2;

//Function Prototypes
int filVec(vector<int> &,vector<int> &,int);
void prntVec(vector<int>,vector<int>,int);
int filAry(int [][COL],int );
void prntAry(int[][COL],int );
//Execution begins here
int main(int argc, char** argv) {
    //declare variables
    int size;
    srand(time(NULL));
    //ask user for size of vector
    cout<<"What is the size of the vector?\n";
    cin>>size;
    vector<int>odd(size);//declare vector odd
    vector<int>even(size);//declare vector even
    filVec(even,odd,size);
    prntVec(even,odd,size);
    //declare variables for 2D array
    int oddEven [][COL];
    filAry(oddEven);
    prntAry(oddEven);
    return 0;
}
int filVec(vector<int> &even, vector<int> &odd,int size){
    for(int i=0;i<size;i++){
        even[i]=2*(rand()%49+1);
    }
    for(int i=0;i<size;i++){
        odd[i]=1+(2*(rand()%49+1));
    }
}
void prntVec(vector<int> even, vector<int> odd,int size){
    for(int i=0;i<size;i++){
        cout<<setw(2)<<right<<even[i]<<" ";
        cout<<setw(2)<<right<<odd[i]<<endl;
    }
}
int filAry(int array[][COL],int size){
    for(int i=0;i<size;i++){
        array[i][1]=2*(rand()%49+1);
    }
    for(int i=0;i<size;i++){
        array[i][2]=1+(2*(rand()%49+1));
    }
}
void prntAry(int array[][COL],int size){
    for(int i=0;i<size;i++){
        cout<<setw(2)<<right<<array[i][1]<<" ";
        cout<<setw(2)<<right<<array[i][2]<<endl;
    }
}