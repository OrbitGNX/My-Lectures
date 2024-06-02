/*=================================================
=               DECIMAL TO BINARY                 =
===================================================
Description:
This program converts the decimal number to its
binary equivalent.

Date: 5/12/24
Programmer: Gyro A. Madrona
-------------------------------------------------*/
#include <iostream>

using namespace std;

int main(){
    // variables
    int decimal_number = 0;
    int bit[7] = {};
    char yn = 'y';

    // prompt the user to enter decimal number
    cout<<"Enter decimal number: ";
    cin>>decimal_number;

    // convert dec to bin
    for(int i=0; i<=7; i++){
        bit[i] = decimal_number%2; // remainder
        decimal_number = decimal_number/2; // quotient
    }
    
    // display result
    cout<<"The binary equivalent is: ";
    for(int i=7; i>=0; i--){
        if(i==3){
            cout<<" ";
        }
        cout<<bit[i];
    }

    // continue?
    cout<<"\nDo you wish to continue?<y/n>: ";
    cin>>yn;

    while(yn!='y' && yn!='n'){
        cout<<"Please enter 'y' or 'n' only: ";
        cin>>yn;
    }

    if(yn=='y'){
        main();
    }

    return 0;
}