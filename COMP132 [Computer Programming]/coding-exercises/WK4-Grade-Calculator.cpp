/*==================================
=          GRADE CALCULATOR        =
==================================*/
/*----------------------------------
Description:
A program that calculates the grade
of the student with remarks.

Programmer:
Gyro A. Madrona
-----------------------------------*/
#include <iostream>
#include <string>

using namespace std;

int main(){
    
    //variables
    string name = "complete name";
    float prelim = 0.1;
    float midterm = 0.1;
    float end_term = 0.1;
    float final_grade = 0.1;
    char yn = 'y';

    //prompt for user name
    cout<<"Enter your complete name: ";
    getline(cin,name);

    //prompt the user to enter grades
    cout<<"Enter PRELIM grade: ";
    cin>>prelim;
    cout<<"Enter MIDTERM grade: ";
    cin>>midterm;
    cout<<"Enter ENDTERM grade: ";
    cin>>end_term;

    //calculate final grade
    final_grade = (0.3*prelim)+(0.3*midterm)+(0.4*end_term);
    cout<<endl;
    cout<<name<<" your final grade is "<<final_grade<<"."<<endl;
    cout<<"Remarks: ";

    //Determine remarks
    if(final_grade>=9.0 && final_grade<=10.0){
        cout<<"Excellent";
    }
    if(final_grade>=8.0 && final_grade<=8.9){
        cout<<"Superior";
    }
    if(final_grade>=7.0 && final_grade<=7.9){
        cout<<"Very Good";
    }
    if(final_grade>=6.0 && final_grade<=6.9){
        cout<<"Good";
    }
    if(final_grade>=5.0 && final_grade<=5.9){
        cout<<"Satisfactory";
    }
    if(final_grade<5.0){
        cout<<"Failure";
    }

    cout<<endl<<endl;
    cout<<"Do you wish to continue?<y/n>";
    cin>>yn;

    if(yn=='y'){
        cout<<endl;
        cin.ignore(1);
        main();
    }

    cout <<endl;
    return 0;
}
