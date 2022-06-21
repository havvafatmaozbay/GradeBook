//
//  main.cpp
//  GradeBook
//
//  Created by Havva Fatma Özbay on 19.06.2022.
//

#include <iostream>
#include "GradeBook.hpp"
int main(int argc, const char * argv[]) {
    // insert code here...
    GradeBook g1("Computer Programming");
    GradeBook g2("Advanced Programming");
    
    cout << "g1 is created for"<<g1.getCourseName()<<endl;
    cout<<"g2 is created for"<<g2.getCourseName()<<endl;
    
   /* g1.determineClassAverage(5);
    g2.determineClassAverage(3);
    
    g1.determineClassAvargeUntillQuit();*/
    
    g1.inputGrades();
    g1.displayLetterGrades();
    
    return 0;
}
