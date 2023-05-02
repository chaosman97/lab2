#include <stdio.h>
#include <string.h>
typedef struct{
char manufacturer[50];
char model[50];
float cubiclt;
int year;
}cars;

int main{
cars c[4];
strcpy((*c).manufacturer,"HONDA");
strcpy((*c).model,"Civic");
c->cubiclt=2.0;
c->year=2017;
}
