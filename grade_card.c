#include <stdio.h>
#include <stdlib.h>
#include "grade_card.h"

void displayStudentByRollNo(int rollno) {
    struct Student students[] = {
        {"Alice", 1, "01/01/2000", (float[]){80, 85, 70, 90, 88}, (float[]){85, 90, 75, 95, 90}},
        {"Bob", 2, "02/02/2001", (float[]){75, 82, 78, 88, 90}, (float[]){80, 85, 80, 90, 85}},
        {"Charlie", 3, "03/03/2002", (float[]){85, 88, 90, 82, 85}, (float[]){90, 92, 85, 88, 92}},
        {"David", 4, "04/04/2003", (float[]){70, 75, 80, 82, 78}, (float[]){72, 78, 75, 80, 77}},
        {"Eva", 5, "05/05/2004", (float[]){90, 92, 95, 88, 90}, (float[]){92, 94, 88, 90, 92}},
        {"Kevin", 6, "07/12/2002", (float[]){86, 89, 91, 83, 86}, (float[]){91, 93, 86, 89, 93}},
        {"Daniel", 7, "29/04/2003", (float[]){74, 79, 87, 92, 88}, (float[]){77, 71, 78, 83, 79}},
        {"Elsa", 8, "08/12/2004", (float[]){89, 72, 85, 78, 80}, (float[]){82, 74, 98, 80, 92}},
    };

    int found = 0;
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); ++i) {
        if (students[i].rollno == rollno) {
            found = 1;
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollno);
            printf("DOB: %s\n", students[i].dob);
            printf("Semester 1 Marks: ");
            for (int j = 0; j < 5; ++j) {
                printf("%.2f ", students[i].marks_sem1[j]);
            }
            printf("\n");
            printf("Semester 2 Marks: ");
            for (int j = 0; j < 5; ++j) {
                printf("%.2f ", students[i].marks_sem2[j]);
            }
            printf("\n");

         
            float avg_sem1 = calculateSemesterAverage(students[i].marks_sem1, 5);
            float avg_sem2 = calculateSemesterAverage(students[i].marks_sem2, 5);
            printf("Average Semester 1 Marks: %.2f\n", avg_sem1);
            printf("Average Semester 2 Marks: %.2f\n", avg_sem2);

            break;
        }
    }

    if (!found) {
        printf("Student with Roll No %d not found.\n", rollno);
    }
}

void displayStudentByName(const char* name) {
    struct Student students[] = {
        {"Alice", 1, "01/01/2000", (float[]){80, 85, 70, 90, 88}, (float[]){85, 90, 75, 95, 90}},
        {"Bob", 2, "02/02/2001", (float[]){75, 82, 78, 88, 90}, (float[]){80, 85, 80, 90, 85}},
        {"Charlie", 3, "03/03/2002", (float[]){85, 88, 90, 82, 85}, (float[]){90, 92, 85, 88, 92}},
        {"David", 4, "04/04/2003", (float[]){70, 75, 80, 82, 78}, (float[]){72, 78, 75, 80, 77}},
        {"Eva", 5, "05/05/2004", (float[]){90, 92, 95, 88, 90}, (float[]){92, 94, 88, 90, 92}},
        {"Kevin", 6, "07/12/2002", (float[]){86, 89, 91, 83, 86}, (float[]){91, 93, 86, 89, 93}},
        {"Daniel", 7, "29/04/2003", (float[]){74, 79, 87, 92, 88}, (float[]){77, 71, 78, 83, 79}},
        {"Elsa", 8, "08/12/2004", (float[]){89, 72, 85, 78, 80}, (float[]){82, 74, 98, 80, 92}},
    };

    int found = 0;
    for (int i = 0; i < sizeof(students) / sizeof(students[0]); ++i) {
        if (strcmp(students[i].name, name) == 0) {
            found = 1;
            printf("Name: %s\n", students[i].name);
            printf("Roll No: %d\n", students[i].rollno);
            printf("DOB: %s\n", students[i].dob);
            printf("Semester 1 Marks: ");
            for (int k = 0; k < 5; ++k) {
                printf("%.2f ", students[i].marks_sem1[k]);
            }
            printf("\n");
            printf("Semester 2 Marks: ");
            for (int k = 0; k < 5; ++k) {
                printf("%.2f ", students[i].marks_sem2[k]);
            }
            printf("\n");

            
            float avg_sem1 = calculateSemesterAverage(students[i].marks_sem1, 5);
            float avg_sem2 = calculateSemesterAverage(students[i].marks_sem2, 5);
            printf("Average Semester 1 Marks: %.2f\n", avg_sem1);
            printf("Average Semester 2 Marks: %.2f\n", avg_sem2);

            break;
        }
    }

    if (!found) {
        printf("Student with Name %s not found. please type the name as it is from above list\n", name);
    }
}

