/*===================================
=       VOLUME AND SURFACE AREA     =
=====================================
Description:
This program calculates the volume and
surface area of cone and cylinder.

Date: 4/20/2024
Programmer: Gyro A. Madrona
-----------------------------------*/

#include <iostream>
#include <string>
#include <cmath>
#define pi 3.14

using namespace std;

int main(){
    //variables
    int solid = 1;
    int measurement = 1;
    float radius = 0.1;
    float height = 0.1;
    float volume = 0.1;
    float slant = 0.1;
    float surface_area = 0.1;
    char yn = 'y';

    //prompt the user to select solid
    cout<<"Select Solid: "<<endl;
    cout<<"1-Cylinder"<<endl;
    cout<<"2-Cone"<<endl;
    cout<<"Enter the number of your choice: ";
    cin>>solid;

    //prompt the user to select measurement
    cout<<"Select Measurement: "<<endl;
    cout<<"1-Surface Area"<<endl;
    cout<<"2-Volume"<<endl;
    cout<<"Enter the number of your choice: ";
    cin>>measurement;

    //prompt the user for units
    cout<<"Enter radius: ";
    cin>>radius;
    cout<<"Enter height: ";
    cin>>height;

    //calculate the total surface area
    if(solid == 1 && measurement == 1){ //cylinder
        surface_area = (2*pi*radius*radius)+(2*pi*radius*height);
        cout<<"The total surface area of Cylinder is "<<surface_area<<" sq.units";
    }
    if(solid == 2 && measurement == 1){ //cone
        slant = sqrt((radius*radius)+(height*height));
        surface_area = (pi*radius*slant)+(pi*radius*radius);
        cout<<"The total surface area of Cone is "<<surface_area<<" sq.units";
    }

    //calculate the volume
    if(solid == 1 && measurement == 2){ //cylinder
        volume = pi*radius*radius*height;
        cout<<"The volume of Cylinder is "<<volume<<" cu.units";
    }
    if(solid == 2 && measurement == 2){ //cone
        volume = (pi*radius*radius*height)/3;
        cout<<"The volume of Cone is "<<volume<<" cu.units";
    }

    cout<<endl<<endl;
    cout<<"Do you wish to continue?<y/n>";
    cin>>yn;

    if(yn=='y'){
        main();
    }

    cout<<endl;
    return 0;
}
