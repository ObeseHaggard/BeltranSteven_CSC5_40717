/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Created on January 13, 2015, 9:15 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare 2 boolean variables
    bool X,Y;
    //Output the heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y X^Y^Y ";
    cout<<"X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    //Fill in the first row
    X=true;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"        ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //Fill in the second row
    X=true;Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"        ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //Fill in the third row
    X=false;Y=true;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"        ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    //Fill in the fourth row
    X=false;Y=false;
    cout<<(X?'T':'F')<<" ";
    cout<<(Y?'T':'F')<<" ";
    cout<<(!X?'T':'F')<<"  ";
    cout<<(!Y?'T':'F')<<"  ";
    cout<<(X&&Y?'T':'F')<<"    ";
    cout<<(X||Y?'T':'F')<<"    ";
    cout<<(X^Y?'T':'F')<<"   ";
    cout<<(X^Y^Y?'T':'F')<<"     ";
    cout<<(X^Y^X?'T':'F')<<"     ";
    cout<<(!(X||Y)?'T':'F')<<"       ";
    cout<<(!X&&!Y?'T':'F')<<"        ";
    cout<<(!(X&&Y)?'T':'F')<<"       ";
    cout<<(!X||!Y?'T':'F')<<" ";
    cout<<endl;
    
    int A=2,B=3;
    A=A^B;
    B=A^B;
    A=A^B;
    cout<<"A = "<<A<<" B = "<<B<<endl;
    int a=10,b=11;
    a=10^11;
    b=01^11;
    a=01^10;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    
    //Exit stage right
    return 0;
}

