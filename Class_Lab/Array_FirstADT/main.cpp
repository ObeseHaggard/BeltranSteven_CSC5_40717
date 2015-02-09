/* 
 * File:   main.cpp
 * Author: Steven Beltran
 *
 * Created on February 9, 2015, 8:43 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants

//Function Prototype
Array *filAray(int);
void prntAry(const Array *, int);
void destroy(Array *);

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(time(NULL));
    //Fill the Array ADT
    int size=100,perLine=10;;
    Array *array=filAray(size);
    //Print the Array ADT
    prntAry(array,perLine);
    //Clean up
    destroy(array);
    //Exit stage right
    return 0;
}
Array *filAray(int n){
    //Make sure valid size for the array
    if(n<=0)return NULL;
    //Dynamically create the array ADT
    Array *a=new Array;
    //Fill the array ADT
    a->size=n;
    //Now declare and allocate memory for the data
    a->data=new int[a->size];
    //Fill data with 2 digit numbers
    for(int i=0;i<a->size;i++){
        a->data[i]=rand()%90+10;
    }
    return a;
}
void prntAry(const Array *a,int perLine){
    for(int i=0;i<a->size;i++){
        cout<<a->data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
}
void destroy(Array *a){
    delete[]a->data;
    delete a;
}