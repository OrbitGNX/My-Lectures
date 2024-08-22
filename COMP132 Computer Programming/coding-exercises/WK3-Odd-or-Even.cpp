/*===================================
=              ODD OR EVEN          =
=====================================
Description:
This program determines if the number
is either odd or even.

Date: 4/20/24
Programmer: Gyro A. Madrona
------------------------------------*/

#include <iostream>

using namespace std;

int main(){
    // variables
    int number = 0;
    int remainder = 0;

    // promp the user to enter number
    cout<<"Enter a number: ";
    cin>>number;

    // calculate remainder
    remainder = number%2;

    if(remainder == 0){
        cout<<number<<" is an even number.";
    }
    if(remainder != 0){
        cout<<number<<" is an odd number.";
    }

    return 0;
}