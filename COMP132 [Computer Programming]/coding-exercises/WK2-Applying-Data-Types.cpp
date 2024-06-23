/*================================================
=           APPLYING C++ DATA TYPES              =
==================================================
Description:
Program that shows the basic employee information.

Date: 4/22/24
Programmer:Gyro A. Madrona
-------------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    // variables
    string first_name = "Gyro";
    string last_name = "Madrona";
    int age = 20;
    float height = 1.7;
    float weight = 56.7;
    string department = "Computer Engineering";

    cout<<"First Name: "<<first_name<<endl;
    cout<<"Last Name: "<<last_name<<endl;
    cout<<"Age: "<<age<<endl;
    cout<<"Height: "<<height<<" m"<<endl;
    cout<<"Weight: "<<weight<<" kg"<<endl;
    cout<<"Department: "<<department<<endl;

    return 0;
}
