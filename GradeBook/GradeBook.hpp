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
    void inputGrades();
    
    /*void setA(int);
    void setB(int);
    void setC(int);
    void setD(int);
    void setF(int);
    
    int getA();
    int getB();
    int getC();
    int getD();
    int getF();*/
    
    void displayLetterGrades();
    
    
    
private:
    string courseName;
    int A,B,C,D,F;
};

#endif /* GradeBook_hpp */
