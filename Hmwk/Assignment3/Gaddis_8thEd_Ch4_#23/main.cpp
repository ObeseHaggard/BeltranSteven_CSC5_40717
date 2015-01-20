/* 
 * File:   main.cpp
 * Author: Steven Beltran
 * Purpose: Hmwk to Geometry Calculator
 * Created on January 19, 2015, 1:36 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global constants
const float PI=3.14159;//PI for circle
//Function Prototypes
int main(int argc, char** argv) {
    int choice;//Declare the variables
    float length,width,base,height,radius,area;
    //Display menu and ask for selection
    cout<<"Geometry Calculator"<<endl;
    cout<<setw(40)<<right<<"1. Calculate the Area of a Circle   "<<endl;
    cout<<setw(40)<<right<<"2. Calculate the Area of a Rectangle"<<endl;
    cout<<setw(40)<<right<<"3. Calculate the Area of a Triangle "<<endl;
    cout<<setw(11)<<"4. Quit"<<endl;
    cout<<setw(27)<<"Enter your choice (1-4)"<<endl;
    cin>>choice;
    if (choice<1||choice>4){
        cout<<"Error"<<endl;
    }
    else 
    switch (choice){
        case 1:{
            cout<<"What is the radius of the circle?"<<endl;
            cin>>radius;
            if (radius<0){
            cout<<"Error"<<endl;
            }
            else{
            area=PI*radius*radius;
            cout<<"The area of the circle is "<<area<<endl;
            }
        }
        break;
        case 2:{
            cout<<"What is the length of the rectangle"<<endl;
            cin>>length;
            cout<<"What is the width of the rectangle"<<endl;
            cin>>width;
            if ((length<0)||(width<0)){
            cout<<"Error"<<endl;
            }
            else{

            area=length*width;
            cout<<"The area of the rectangle is "<<area<<endl;
            }
        }
        break;
        case 3:{
            cout<<"What is the base of the triangle"<<endl;
            cin>>base;
            cout<<"What is the height of the triangle"<<endl;
            cin>>height;
            if ((base<0)||(height<0)){
            cout<<"Error"<<endl;
            }
            else{
            area=base*height*0.5f;
            cout<<"The area of the triangle is "<<area<<endl;
            }
        }
        break;
        case 4:{}
    }
    return 0;
}

