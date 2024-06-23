/*=====================================
=          LOGIN CREDINTIALS          =
=======================================
Description:
This program checks the login credentials 
of the user against the data stored in 
the database.

Date: 4/27/24
Programmer: Gyro A. Madrona
-------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    // database
    string user_1 = "Jason";
    string pass_1 = "Red";
    string user_2 = "Zack";
    string pass_2 = "Black";
    string user_3 = "Kimberly";
    string pass_3 = "Pink";

    // variables
    string username = "name";
    string password = "pass";
    char yn = 'y';

    // login account
    cout<<"Enter username: ";
    getline(cin, username);
    cout<<"Enter password: ";
    getline(cin, password);

    // verify account
    if(username == user_1 && password == pass_1){
        cout<<"Welcome Back "<<username<<"!";
    }
    else if(username == user_2 && password == pass_2){
        cout<<"Welcome Back "<<username<<"!";
    }
    else if(username == user_3 && password == pass_3){
        cout<<"Welcome Back "<<username<<"!";
    }
    else{
        cout<<"Invalid username or password!";
    }

    cout<<endl;
    cout<<"Do you wish to continue?<y/n>";
    cin>>yn;
    if(yn=='y'){
        cin.ignore(1);
        main();
    }

    return 0;
}

