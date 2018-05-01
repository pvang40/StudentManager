#include "student.h" 


string student::string setName(string firstInput, string lastInput) 
{
   last = lastInput; 
   first = firstInput; 
}; 

string student::fullName(void)
{ 
    cout<< first << " " << last<< endl;
}; 
    


