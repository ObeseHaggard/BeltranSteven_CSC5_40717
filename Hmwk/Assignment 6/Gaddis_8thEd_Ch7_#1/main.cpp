/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Largest/Smallest Array Values
 * Created on February 7, 2015, 11:19 PM
 */
//System libraries
#include <cstdlib>
#include <iostream>
using namespace std;

//User libraries

//Global Constants

//Function Prototype
const int num=10;
int a[num];
//Execution begins here!!!
int main(int argc, char** argv) {
    //Declare variables
    int min,max;
    //Prompt user
    cout<<"Input 10 random numbers."<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];//User input
    }
    min=a[0];
    max=a[0];
    //Finding the max and minimum of the input
    for(int i=1;i<10;i++){
        if(min>a[i]){
            min=a[i];
        }else if(max<a[i]){
            max=a[i];
        }
    }
    //Output the results
    cout<<"Min "<<min<<endl;
    cout<<"Max "<<max<<endl;
    return 0;
}
