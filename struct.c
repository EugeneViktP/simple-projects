#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    char major[50];
    int age;
    double jpa;

};


int main(void)
{
    
    struct Student student1;
    student1.age = 22;
    student1.jpa = 3.2;
    strcpy(student1.name, "Jim");
    strcpy(student1.major, "CS50");

    struct Student student2 = {"Leo", "CS60", 19, 4};

    printf("%f\n", student1.jpa);
    printf("%s\n", student1.name);
    printf("%s\n", student2.name);

    return 0;
}