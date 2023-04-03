#include <stdio.h>
#include <string.h>

typedef struct{
  char name[100];
  int age;
  float grades[3];
}student;

int main(){
  student stud1;
  strcpy(stud1.name,"Nikos Kallias");
  stud1.age=19;
  stud1.grades[0]=10;
  stud1.grades[1]=9.5;
  stud1.grades[2]=8.5;
  printf("Name: %s\nAge: %d\nAvg: %.1f",stud1.name,stud1.age,(stud1.grades[0]+stud1.grades[1]+stud1.grades[2])/3);
  return 0;
}
