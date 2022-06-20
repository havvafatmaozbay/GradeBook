//
//  GradeBook.cpp
//  GradeBook
//
//  Created by Havva Fatma Özbay on 19.06.2022.
//

#include "GradeBook.hpp"
#include<iostream>
#include<string>

using namespace std;

GradeBook::GradeBook(string name){
    setCourseName(name);
}

void GradeBook::setCourseName(string name){
    if(name.length()<=30){
        courseName =name;
        
    }
    else{
        courseName = name.substr(0,30);
        
    }
}
string GradeBook::getCourseName(){
    return courseName;
}

void GradeBook::DisplayMessage(){
    cout << "Welcome to the Grade Book for"<<getCourseName()<<endl;
}

void GradeBook::determineClassAverage(int classnumber){
    double totalGrade = 0;
    int counter=0;
    for (int i = 1; i < classnumber +1; i++){
        cout << "Enter the grade :"<<i<<"=";
        int grade = 0;
        cin >> grade;
        totalGrade = totalGrade +grade;
        counter++;
    }
    double avarage = totalGrade/classnumber;
    cout<<"Average : "<< avarage<<endl;
}

void GradeBook::determineClassAvargeUntillQuit(){
    double total = 0;
    int counter = 0;
    
    cout <<"Enter the Grade or press -1 to Quit"<<endl;
    int grade = 0;
    cin >> grade;
    
    while(grade != -1){
        total = total + grade;
        counter += 1;
        cout << "Enter the Grade or press -1 to Quit"<<endl;
        cin >> grade;
    }
    
    if(counter!=0){
        double average = total/counter;
        cout << "Average :"<<average<<endl;
    }
}
