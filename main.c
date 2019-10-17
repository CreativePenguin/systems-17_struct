#include "main.h"

void print_school(struct School sc) {
  printf("School {\n\tname: %s,\n\t num_students %d,\n}\n", sc.name, sc.num_students);
}

void print_student(struct Student st) {
  printf("Student {\n\tname: %s,\n", st.name);
  printf("\t*classes: [%s", *st.classes);
  int i = 1;
  for(; i < CLASS_LEN; i++) {
    printf(", %s", st.classes[i]);
  }
  printf("]\n\t");
  print_school(st.school);
}

void modify_student(struct Student *st, char *name, char *classes[CLASS_LEN], struct School school) {
  st->name = name;
  int i = 0;
  for(; i < CLASS_LEN; i++) {
    st->classes[i] = classes[i];
  }
  st->school = school;
}

void rand_student(struct Student *st) {
  struct School sc1;
  sc1.name = "Stuyvesant";
  sc1.num_students = 2,400;

  struct School sc2;
  sc2.name = "Brooklyn Tech";
  sc2.num_students = 9,001;

//  struct Student st1;
//  st1.name = "Adris";
//  st1.classes[0] = "systems";
//  st1.classes[1] = "robotics";
//  st1.school = sc1;
//
//  struct Student st2;
//  st2.name = "Fake Boi";
//  st2.classes[0] = "Spanglish";
//  st2.classes[1] = "Nap Time";
//  st2.school = sc2;
//
//  struct Student st3;
//  st3.name = "Overachiever Kid";
//  st3.classes[0] = "Physics XY";
//  st3.classes[1] = "AP AT Softdev";
//  st3.school = sc1;

  char *names[3] = {"Adris", "Fake Boi", "Overachiever"};
  char *classes[3][CLASS_LEN] = { {"systems", "robotics"}, {"spanglish", "nap time"}, {"Physics XY", "AP AT Softdev"} };
  struct School scs[3] = {sc1, sc2, sc1};
  srand(time(NULL));
  int randint = rand() % 3;
  if(randint == 0) modify_student(st, names[0], classes[0], scs[0]);
  if(randint == 1) modify_student(st, names[1], classes[1], scs[1]);
  else modify_student(st, names[2], classes[2], scs[2]);
}

int main() {
  printf("3 different students were walking on the street. One of them got accepted into hogwarts, but the owl was like super lazy, and didn't really care, so he just gave it to a random one. The student, listed below got the ticket\n");
  struct School sc1;
  sc1.name = "Stuyvesant";
  sc1.num_students = 2,400;

  struct Student *st;
  st->name = "Adris";
  st->classes[0] = "systems";
  st->classes[1] = "robotics";
  st->school = sc1;
//  rand_student(st);
//  print_student(*st);
  return 0;
}
