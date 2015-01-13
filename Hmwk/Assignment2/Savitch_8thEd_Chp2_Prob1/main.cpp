/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: metric ton conversion
 * Created on January 13, 2015, 10:16 AM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global constants
const float CMTNONS=3.527392e4;//Conversion from metric ton to ounces

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float wtPackOz;// Weight of cereal in ounces
    float wtPackTn;//Weight of cereal in metric tons
    float nPackTn;//Number of packages per metric ton
    //Prompt user for cereal weights.
    cout<<"Input the number of ounces on the cereal box"<<endl;
    cout<<"box to convert to metric tons."<<endl;
    cout<<"Format is float ddd.ddd (ounces)"<<endl;
    cin>>wtPackOz;
    //Calculate the results
    wtPackTn=wtPackOz/CMTNONS;
    nPackTn=1/wtPackTn;
    //Output the results
    cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons"<<endl;
    cout<<"Number of cereal boxes in a metric ton ="<<nPackTn<<endl;
    //Ask if user would like to repeat the calculation
    cout<<"Would you like to repeat the calculation?"<<endl;
    cout<<"Or make a new calculatioin?"<<endl;
    cout<<"Type Y for yes and N for no."<<endl;
    char answer;
    cin>>answer;
    if(answer=='Y'||answer=='y') {
        //Prompt user for cereal weights.
        cout<<"Input the number of ounces on the cereal box"<<endl;
        cout<<"box to convert to metric tons."<<endl;
        cout<<"Format is float ddd.ddd (ounces)"<<endl;
        cin>>wtPackOz;
        //Calculate the results
        wtPackTn=wtPackOz/CMTNONS;
        nPackTn=1/wtPackTn;
        //Output the results
        cout<<"Weight of cereal box is "<<wtPackTn<<"(metric tons"<<endl;
        cout<<"Number of cereal boxes in a metric ton ="<<nPackTn<<endl;
    }
    return 0;
}

