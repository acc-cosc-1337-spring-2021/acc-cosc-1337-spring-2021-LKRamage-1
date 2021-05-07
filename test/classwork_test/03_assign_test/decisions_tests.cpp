#include<iostream>
#include "decision.h"
using namespace std;
int main()
{
    cout<<"Test 1 for grade using if for 95: "<<get_letter_grade_using_if(95)<<"\n";
    cout<<"Test 1 for grade using switch for 95: "<<get_letter_grade_using_switch(95)<<"\n";
    cout<<"\n";
    cout<<"Test 2 for grade using if for 85: "<<get_letter_grade_using_if(85)<<"\n";
    cout<<"Test 2 for grade using switch for 85: "<<get_letter_grade_using_switch(85)<<"\n";
    cout<<"\n";
    cout<<"Test 3 for grade using if for 75: "<<get_letter_grade_using_if(75)<<"\n";
    cout<<"Test 3 for grade using switch for 75: "<<get_letter_grade_using_switch(75)<<"\n";
    cout<<"\n";
    cout<<"Test 4 for grade using if for 65: "<<get_letter_grade_using_if(65)<<"\n";
    cout<<"Test 4 for grade using switch for 65: "<<get_letter_grade_using_switch(65)<<"\n";
    cout<<"\n";
    cout<<"Test 5 for grade using if for 50: "<<get_letter_grade_using_if(50)<<"\n";
    cout<<"Test 5 for grade using switch for 50: "<<get_letter_grade_using_switch(50)<<"\n";
    return 0;
}