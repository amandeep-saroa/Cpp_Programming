/*
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character), and depending upon which the total salary is calculated as -
    totalSalary = basic + hra + da + allow – pf
where :
hra   = 20% of basic
da    = 50% of basic
allow = 1700 if grade = ‘A’
allow = 1500 if grade = ‘B’
allow = 1300 if grade = ‘C' or any other character
pf    = 11% of basic.
*/


#include<iostream>
#include<cmath>
using namespace std;
int main()
{

    double basic;
    cout << "Enter basic pay : ";
    cin >> basic;

    char grade;
    cout << "Enter your grade : ";
    cin >> grade;

    double hra = 0.2*basic;
    double da = 0.5*basic;
    double pf = 0.11*basic;
    double allow = 1300;
    if(grade == 'A')
    {   
        allow = 1700;
    }
    else if(grade == 'B')
    {
        allow = 1500;
    }

    double totalSalary = round(basic + hra + da + allow - pf);

    cout << "Your total salary: " << totalSalary;

}