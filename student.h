#ifndef STUDENT_H 
#define STUDENT_H 
#include <string>
#include <iostream> 


class student 
{ 
private:
   std::string last; 
   std::string first; 

public:
   std::string fullName(); 
    void setName(std::string, std::string); 
        
}; 


#endif
