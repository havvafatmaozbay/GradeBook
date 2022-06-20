//
//  GradeBook.hpp
//  GradeBook
//
//  Created by Havva Fatma Özbay on 19.06.2022.
//

#ifndef GradeBook_hpp
#define GradeBook_hpp

#include <stdio.h>
#include <string>
using namespace std;

class GradeBook{
public:
    GradeBook(string);
    
    void setCourseName(string);
    string getCourseName();
    void DisplayMessage();
    void determineClassAverage(int);
    
    void determineClassAvargeUntillQuit();
    
private:
    string courseName;
};

#endif /* GradeBook_hpp */
