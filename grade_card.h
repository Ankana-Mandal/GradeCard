#ifndef GRADE_CARD_H
#define GRADE_CARD_H

#include "/Users/ankanamandal/codes/GradeCard/average.h " 
#include <string.h>

struct Student {
    char *name;
    int rollno;
    char *dob;
    float *marks_sem1;
    float *marks_sem2;
};

void displayStudentByRollNo(int rollno);
void displayStudentByName(const char* name);

#endif



