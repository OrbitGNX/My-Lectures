/*=====================================================
=              RESISTOR COLOR DECODER                 =
=======================================================
Description:
This program determines the value of the resistor based
on its color code.

0 - Black
1 - Brown
2 - Red
3 - Orange
4 - Yellow
5 - Green
6 - Blue
7 - Violet
8 - Gray
9 - White

5% - Gold
10% - Silver
20% - No Color

Date: 5/4/24
Programmer: Gyro A.Madrona

*/
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    // variables
    string color_1 = "Black";
    string color_2 = "Black";
    string color_3 = "Black";
    string color_4 = "Gold";

    int value_1 = 0;
    int value_2 = 0;
    int value_3 = 0;
    int value_4 = 0;

    float resistance = 0.0;
    char suffix = 'R';
    char yn = 'y';

    // prompt the user to enter band colors
    cout<<"- Resistor Color Decoder -\n";
    cout<<"Enter the 1st Band Color: ";
    cin>>color_1;
    cout<<"Enter the 2nd Band Color: ";
    cin>>color_2;
    cout<<"Enter the 3rd Band Color: ";
    cin>>color_3;
    cout<<"Enter the 4th Band Color: ";
    cin>>color_4;

    // decode 1st band
    if(color_1 == "Black"){
        value_1 = 0;
    }
    else if(color_1 == "Brown"){
        value_1 = 10;
    }
    else if(color_1 == "Red"){
        value_1 = 20;
    }
    else if(color_1 == "Orange"){
        value_1 = 30;
    }
    else if(color_1 == "Yellow"){
        value_1 = 40;
    }
    else if(color_1 == "Green"){
        value_1 = 50;
    }
    else if(color_1 == "Blue"){
        value_1 = 60;
    }
    else if(color_1 == "Violet"){
        value_1 = 70;
    }
    else if(color_1 == "Gray"){
        value_1 = 80;
    }
    else if(color_1 == "White"){
        value_1 = 90;
    }
    else{
        cout<<"Invalid Input!";
    }

    // decode 2nd band
    if(color_2 == "Black"){
        value_2 = 0;
    }
    else if(color_2 == "Brown"){
        value_2 = 1;
    }
    else if(color_2 == "Red"){
        value_2 = 2;
    }
    else if(color_2 == "Orange"){
        value_2 = 3;
    }
    else if(color_2 == "Yellow"){
        value_2 = 4;
    }
    else if(color_2 == "Green"){
        value_2 = 5;
    }
    else if(color_2 == "Blue"){
        value_2 = 6;
    }
    else if(color_2 == "Violet"){
        value_2 = 7;
    }
    else if(color_2 == "Gray"){
        value_2 = 8;
    }
    else if(color_2 == "White"){
        value_2 = 9;
    }
    else{
        cout<<"Invalid Input!";
    }

    // decode 3rd band (Multiplier)
    if(color_3 == "Black"){
        value_3 = 0;
    }
    else if(color_3 == "Brown"){
        value_3 = 1;
    }
    else if(color_3 == "Red"){
        value_3 = 2;
    }
    else if(color_3 == "Orange"){
        value_3 = 3;
    }
    else if(color_3 == "Yellow"){
        value_3 = 4;
    }
    else if(color_3 == "Green"){
        value_3 = 5;
    }
    else if(color_3 == "Blue"){
        value_3 = 6;
    }
    else if(color_3 == "Violet"){
        value_3 = 7;
    }
    else if(color_3 == "Gray"){
        value_3 = 8;
    }
    else if(color_3 == "White"){
        value_3 = 9;
    }
    else{
        cout<<"Invalid Input!";
    }

    // decode 4th band (Tolerance)
    if(color_4 == "Gold"){
        value_4 = 5;
    }
    else if(color_4 == "Silver"){
        value_4 = 10;
    }
    else if(color_4 == "None"){
        value_4 = 20;
    }
    else{
        cout<<"Invalid Input";
    }
    
    // display result
    resistance = (value_1 + value_2)*pow(10,value_3);

    // engineering mode
    switch(value_3){
        case 2: // Red
            resistance = resistance/pow(10,3);
            suffix = 'K';
            break;
        case 3: // Orange
            resistance = resistance/pow(10,3);
            suffix = 'K';
            break;
        case 4: // Yellow
            resistance = resistance/pow(10,3);
            suffix = 'K';
            break;
        case 5: // Green
            resistance = resistance/pow(10,6);
            suffix = 'M';
            break;
        case 6: // Blue
            resistance = resistance/pow(10,6);
            suffix = 'M';
            break;
        case 7: // Violet
            resistance = resistance/pow(10,6);
            suffix = 'M';
            break;
        case 8: // Gray
            resistance = resistance/pow(10,9);
            suffix = 'G';
            break;
        case 9: // White
            resistance = resistance/pow(10,9);
            suffix = 'G';
            break;
        default:
            resistance = resistance;
            break;
    }

    cout<<"The RESISTANCE value is "<<resistance<<suffix<<" +-"<<value_4<<"%";
    
    // prompt the user if he/she wants to continue
    cout<<"\nDo you wish to continue?<y/n>: ";
    cin>>yn;

    if(yn=='y'){
        main();
    }

    return 0;
}