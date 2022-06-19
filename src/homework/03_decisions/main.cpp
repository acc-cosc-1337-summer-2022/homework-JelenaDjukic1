//write include statements
#include <iostream>
#include "decisions.h"

using namespace std;

int main() 
{
    string grade;
    int totalCreditPoints = 0;
    int i = 1;
    double creditHours,totalCreditHours = 0;
    
   
    cout<<"Enter letter grade and credit hours for each class or z to quit entering\n";
    
    
    while(true){
        
    
        cout<<"Enter grade for class "<<i<<": ";
        cin>>grade;
        
    
        if(grade == "z"){
            break;
        }
        
    
        cout<<"Enter credit hours for class "<<i<<": ";
        cin>>creditHours;
    
    
        totalCreditPoints += get_grade_points(grade) * creditHours;
        totalCreditHours += creditHours;
        
        i++;
    }
    
    
    cout<<"\n";
    
    
    cout<<"Total GPA: "<<calculate_gpa(totalCreditHours,totalCreditPoints)<<"\n";
    cout<<"Total Credit Points: "<<totalCreditPoints<<"\n";
    cout<<"Total Credit Hours: "<<totalCreditHours<<"\n";
    

	return 0;
}