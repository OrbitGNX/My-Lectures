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
    int bit_1 = 0;
    int bit_2 = 0;
    int bit_3 = 0;
    int bit_4 = 0;

    int bit_5 = 0;
    int bit_6 = 0;
    int bit_7 = 0;
    int bit_8 = 0;

    int counter = 1;
    char yn = 'y';

    // prompt the user to enter decimal number
    cout<<"Enter decimal number: ";
    cin>>decimal_number;

    // convert dec to bin
    while(counter<9){
        switch(counter){
            case 1:
                bit_1 = decimal_number%2;
                break;
            case 2:
                bit_2 = decimal_number%2;
                break;
            case 3:
                bit_3 = decimal_number%2;
                break;
            case 4:
                bit_4 = decimal_number%2;
                break;
            case 5:
                bit_5 = decimal_number%2;
                break;
            case 6:
                bit_6 = decimal_number%2;
                break;
            case 7:
                bit_7 = decimal_number%2;
                break;
            case 8:
                bit_8 = decimal_number%2;
                break;
            default:
                cout<<"Invalid Value";
        }
        decimal_number = decimal_number/2;
        counter++;
    }

    // display result
    cout<<"The binary equivalent is: "<<bit_8<<bit_7<<bit_6<<bit_5
    <<" "<<bit_4<<bit_3<<bit_2<<bit_1;

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