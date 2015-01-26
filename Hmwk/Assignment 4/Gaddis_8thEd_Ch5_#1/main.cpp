/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Sum of Numbers 
 * Created on January 24, 2015, 8:15 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
 //Declare variables
int nSum=0,n;
//Prompt user for factorial
cout<<"What number(N) would you like to use to sum of all the integers from \n";
cout<<"1 up to the number(N) entered \n";
cin>>n;
while (n<=0){
    cout<<"Number entered is not valid please choose another number\n";
    cin>>n;
}
//Do the calculation
for(int temp=1;temp<=n;temp++){
    nSum+=temp;
    //Output the result
}
cout<<"Total sum from 1 to "<<n<<" = "<<nSum<<endl;
//Exit Stage right
return 0;
}