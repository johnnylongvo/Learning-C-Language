#include <stdio.h>
#include <string.h>

// array of structs
// working with students printing student's name and GPA

struct Student {
    char name[12];
    float gpa;
};

int main()
{

    struct Student student1 = {"Tina", 4.0};
    struct Student student2 = {"Teddy", 1.5};
    struct Student student3 = {"Bob", 3.7};
    struct Student student4 = {"Linda", 2.9};

    struct Student students[] = {student1, student2, student3, student4};

    for (int index = 0; index < sizeof(students) / sizeof(students[0]); index++)
    {
        printf("Name: %-12s\t", students[index].name);
        printf("GPA: %.2f\n", students[index].gpa);
    }

    return 0;
}