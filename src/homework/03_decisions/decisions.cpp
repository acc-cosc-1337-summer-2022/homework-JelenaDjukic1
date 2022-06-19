//write include statement for decisions header
#include "decisions.h"
#include <iostream>
using namespace std;

//Write code for function(s) code here

int get_grade_points(string letter_grade)
if(letter_grade == "A"){
        return 4;
    }else if(letter_grade == "B"){
        return 3;
    }else if(letter_grade == "C"){
        return 2;
    }else if(letter_grade == "D"){
        return 1;
    }else if(letter_grade == "F"){
        return 0;
    }else{
        return 0;
    }
double calculate_gpa(int credit_hours, double credit_points)
    if(credit_hours == 0)
    {
        return 0;
    }
    else
    {
        return credit_points/credit_hours;
    }
