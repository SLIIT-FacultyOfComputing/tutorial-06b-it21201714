#include "Student.h"
#include <iostream>
using namespace std;

// Assign studentId and name
Student::assignDetails(int stId, char[20] stName) {

  studentId=stId;
  name=stName;
    
  
}

// Display StudentId and Name
Student::display() {
  cout<<"Student ID :- "<<studentId<<endl;
  cout<<"Name :- "<<name<<endl;
  
}
