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
    int divisor = 2;
    int counter = 0;
    char yn = 'y';

    // prompt the user to enter number
    cout<<"Enter a number: ";
    cin>>number;

    // if divisible only by itself then prime
    do{
        if(number%divisor==0){
            counter++;
        }
        
        divisor++;

    }while(divisor<=number);

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