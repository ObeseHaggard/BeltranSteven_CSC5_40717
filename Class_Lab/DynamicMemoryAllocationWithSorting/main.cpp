/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on February 5, 2015, 10:01 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int *filAray(int);
void prntAry(int *,int,int);
int * markSrt(int *,int);
void swap(int [],int *);
void swap(int &,int &);
void destroy(int *);

//Execution begins here
int main(int argc, char** argv) {
    //Initialize the random number see
    srand(time(NULL));
    //Declare and initialize our array
    int size=100;
    int *array=filAray(size);
    //Print the array
    prntAry(array,size,10);
    //Sort the array
    int *barry=markSrt(array,size);
    //Print the results
    prntAry(barry,size,10);
    //Destroy the arrays
    destroy(array);
    destroy(barry);
    //Exit stage right
    return 0;
}
int * markSrt(int *a,int n){
    //Allocate memory for a copy of the data
    if (n<=1)return 0;
    int *b=new int[n];
    //Copy the information
    for (int i=0;i<n;i++){
        *(b+i)=a[i];
    }
    //Sort the array
    for(int pos=0;pos<n-1;pos++){
        for(int list=pos+1;list<n;list++){
            if(b[pos]>*(b+list))swap(b[pos],*(b+list));//swap (int &,int &)
            //if(*(b+pos)>b[list])swap(&b[pos],(b+list));//swap (int *,int *)
        }
    }
    //Return the results
    return b;
}
//Fill a dynamic array with 2 digit random numbers
int *filAray(int n){
    //Allocate the memory
    if (n<=1)return 0;
    int*a=new int [n];
    //Fill with random numbers
    for(int i=0;i<n;i++){
        *(a+i)=rand()%90+10;
    }
    return a;
}
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void swap(int &x,int &y){
    int temp=x;
    x=y;
    y=temp;
}
//Print the array
void prntAry(int *a,int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<*(a+i)<<" ";
        if (i%perLine==(perLine-1))cout<<endl;
    }
}
//delete allocated memory
void destroy(int *a){
    delete []a;
}