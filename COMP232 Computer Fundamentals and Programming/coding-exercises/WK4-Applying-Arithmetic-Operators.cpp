/*===================================
=   APPLYING ARITHMETIC OPERATORS   =
=====================================
Description:
This program calculates the volume of
cone and cylinder.

Date: 4/20/24
Programmer: Gyro A. Madrona
------------------------------------*/

#include <iostream>
#include <string>
#define pi 3.14

using namespace std;

int main(){
    //variables
    int select = 1;
    float radius = 0.1;
    float height = 0.1;
    float volume = 0.1;
    string solid = "Cylinder";
    char yn = 'y';

    //prompt the user to select solid
    cout<<"Select Solid: "<<endl;
    cout<<"1-Cylinder"<<endl;
    cout<<"2-Cone"<<endl;
    cout<<"Enter the number of your choice: ";
    cin>>select;

    //prompt the user for units
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Enter height: ";
    cin>>height;

    //calculate the volume
    if(select == 1){ //cylinder
        solid = "Cylinder";
        volume = pi*radius*radius*height;
    }
    if(select == 2){ //cone
        solid = "Cone";
        volume = (pi*radius*radius*height)/3;
    }

    cout<<"The volume of "<<solid<<" is "<<volume<<" cu.units";

    cout<<endl<<endl;
    cout<<"Do you wish to continue?<y/n>";
    cin>>yn;

    if(yn=='y'){
        cout<<endl;
        main();
    }

    cout<<endl;
    return 0;
}