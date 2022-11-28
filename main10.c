#include <stdio.h>
#include <stdlib.h>

int g_id = 1;

typedef enum kepzes_t {BSc, MSc, PhD} kepzes_t;

typedef struct phd_t
{
    double impact;
    int num;
} phd_t;

typedef union union_t
{
    int courses;
    double credit;
    phd_t phd_data;
} union_t;

typedef struct Student_t
{
    int id;
    int age;
    double average;
    kepzes_t type;
    union_t data; 
} student_t;

student_t* student_init(kepzes_t _type)
{
    student_t* student = (student_t*) malloc(sizeof(student_t));
    student -> id = g_id++;
    student -> age = rand() % 10 + 17;
    student -> average = rand() % 401 / 100. + 1;
    student -> type = _type;
    switch (_type){
        case BSc: student -> data.courses = rand() % 3 + 8; break;
        case MSc: student -> data.credit = rand() % 500 / 100.; break;
        case PhD: student -> data.phd_data.impact = rand() % 100 / 100.; 
                  student -> data.phd_data.num = rand() % 5;
        break;
    }
    return student;
}

int main()
{
    student_t* students[] = {student_init(BSc), student_init(MSc), student_init(PhD), student_init(BSc)};
    for (int i = 0; i < 4; ++i){
        printf("%i, %i, %f\n", students[i] -> id, students[i] -> age, students[i] -> average);
    }
}