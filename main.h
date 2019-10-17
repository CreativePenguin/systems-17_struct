#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define CLASS_LEN 2
struct School {
    char *name;
    unsigned int num_students;
};

struct Student {
    char *name;
    char *classes[CLASS_LEN];
    struct School school;
};

//impl would be so cool

int main();
void print_student(struct Student st);
void print_school(struct School sc);
//void modify_student(struct Student *st, char *name, char *classes[CLASS_LEN], struct School school);
void rand_student(struct Student *st);
