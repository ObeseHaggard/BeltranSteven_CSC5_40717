/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Word Game
 * Created on January 14, 2015, 10:01 PM
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
    string Name,City,Age,College,Profession,Animal,Petname;
    //Ask for input
    cout<<"Please enter the following details:"<<endl;
    cout<<"Your Name"<<endl;
    getline(cin,Name);
    cout<<"Your Age"<<endl;
    getline(cin,Age);
    cout<<"Name of a City"<<endl;
    getline(cin,City);
    cout<<"Name of a College"<<endl;
    getline(cin,College);
    cout<<"A Profession"<<endl;
    getline(cin,Profession);
    cout<<"A Type of Animal"<<endl;
    getline(cin,Animal);
    cout<<"A Pet's Name"<<endl;
    getline(cin,Petname);
    //Output the Story
    cout<<"There once was a person named "<<Name<<" who lived in "<<City<<".";
    cout<<"At the age of "<<Age<<", "<<Name<<" went to college at "<<College<<". ";
    cout<<Name<<" graduated and went to work as a "<<Profession<<". ";
    cout<<"Then, "<<Name<<" adopted a(n) "<<Animal<<" named "<<Petname<<". ";
    cout<<"They both lived happily ever after!"<<endl;
            

    return 0;
}

