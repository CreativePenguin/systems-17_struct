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

int main() {
  struct School sc1;
  sc1.name = "Stuyvesant";
  sc1.num_students = 2,400;

  struct School sc2;
  sc2.name = "Brooklyn Tech";
  sc2.num_students = 9,001;

  struct Student st1;
  st1.name = "Adris";
  st1.classes[0] = "systems";
  st1.classes[1] = "robotics";
  st1.school = sc1;

  print_student(st1);

  struct Student st2;
  st1.name = "Fake Boi";
  st1.classes[0] = "Spanglish";
  st1.classes[1] = "Nap Time";
  st1.school = sc1;

  print_student(st2);

  return 0;
}
