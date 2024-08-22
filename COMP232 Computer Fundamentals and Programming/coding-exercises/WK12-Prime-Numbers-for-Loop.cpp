/*==============================================
=               PRIME NUMBERS                  =
================================================
Description:
This program determines if the number entered
by the user is a PRIME number or NOT.

Date: 5/14/24
Programmer: Gyro A. Madrona
----------------------------------------------*/
#include <iostream>

using namespace std;

int main(){
    // variables
    int number = 0;
    int counter = 0;
    char yn = 'y';

    // prompt the user to enter number
    cout<<"Enter a number: ";
    cin>>number;

    // if divisible only by itself then prime
    for(int i=2; i<=number; i++){
        if(number%i==0){
            counter++;
        }
    }

    // display result
    if(counter==1){
        cout<<number<<" is a PRIME number!";
    }
    else{
        cout<<number<<" is NOT a PRIME number!";
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