/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Sales Bar Chart problem
 * Created on January 22, 2015, 10:14 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Ask user for today's sales for five stores
    int store1,store2,store3,store4,store5,graph,temp;
    char asterisk=42;
    cout<<"Enter today's sales for store 1: ";
    cin>>store1;
    cout<<"Enter today's sales for store 2: ";
    cin>>store2;
    cout<<"Enter today's sales for store 3: ";
    cin>>store3;
    cout<<"Enter today's sales for store 4: ";
    cin>>store4;
    cout<<"Enter today's sales for store 5: ";
    cin>>store5;
    cout<<"Sales Bar Chart\n(Each * = $100)\n";
    cout<<"Store 1: ";
    graph=store1/100;
    temp=0;
    for (int temp;temp<graph;temp++){
    cout<<asterisk;
    }
        cout<<"\nStore 2: ";
    graph=store2/100;
    for (int temp;temp<graph;temp++){
    cout<<asterisk;
    }
        cout<<"\nStore 3: ";
    graph=store3/100;
    for (int temp;temp<graph;temp++){
    cout<<asterisk;
    }
        cout<<"\nStore 4: ";
    graph=store4/100;
    for (int temp;temp<graph;temp++){
    cout<<asterisk;
    }
        cout<<"\nStore 5: ";
    graph=store5/100;
    for (int temp;temp<graph;temp++){
    cout<<asterisk;
    }
    return 0;
}
