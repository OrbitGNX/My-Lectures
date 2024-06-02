/*==========================================
=         EMPLOYEE BONUS CALCULATOR        =
============================================
Description:
    This program calculates the employee's
    bonus based on his annual salary and
    tenure in the company.

Date: 4/28/24
Programmer: Gyro A. Madrona
------------------------------------------*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    // variables
    string full_name = "full name";
    double annual_salary = 0.0;
    double bonus = 0.0;
    int year_started = 0;
    int year_current = 2024;
    int year_tenure = 0;
    char yn = 'y';

    // prompt for employee's data
    cout<<"Full Name: ";
    getline(cin, full_name);
    cout<<"Annual Salary: ";
    cin>>annual_salary;
    cout<<"Year Started: ";
    cin>>year_started;

    // calculate bonus
    year_tenure = year_current - year_started;

    if(year_tenure>=5){
        bonus = annual_salary*(15.0/100.0);
    }
    else if(year_tenure>=3 && year_tenure<5){
        bonus = annual_salary*(10.0/100.0);
    }
    else if(year_tenure>=1 && year_tenure<3){
        bonus = annual_salary*(5.0/100.0);
    }
    else{
        bonus = 0;
    }

    // display bonus
    cout<<full_name<<" your bonus is "<<bonus<<" php";

    cout<<endl;
    cout<<"Do you wish to continue?<y/n>";
    cin>>yn;

    if(yn == 'y'){
        cout<<endl;
         cin.ignore(1);
         main();
    }

    return 0;
}