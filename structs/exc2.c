#include <stdio.h>
#include <string.h>

typedef struct{
  char name[50];
  char surname[50];
  int age;
  float wage;
}ypalilos;

int main(){
  int max_age=0,i;
  char max_wage_name[50],max_wage_surname[50],max_age_name[50],max_age_surname[50];
  float max_wage=0.0;
  ypalilos ypal;
  for(i=0;i<5;i++){
    printf("\nDoste ta stoixeia %dou ypalilou\n",i+1);
    printf("\nEponymo: ");
    scanf("%s",ypal.surname);
    printf("\nOnoma: ");
    scanf("%s",ypal.name);
    printf("\nHlikia: ");
    scanf("%d",&ypal.age);
    printf("\nMisthos: ");
    scanf("%f",&ypal.wage);
    printf("\n");

    if(max_age<ypal.age){
      strcpy(max_age_name,ypal.name);
      strcpy(max_age_surname,ypal.surname);
      max_age=ypal.age;
    }
    if(max_wage<ypal.wage){
      strcpy(max_wage_name,ypal.name);
      strcpy(max_wage_surname,ypal.surname);
      max_wage=ypal.wage;
    }
  }
  printf("O/H %s %s exei thn megalyterh hlikia: %d\n",max_age_name,max_age_surname,max_age);
  printf("O/H %s %s exei ton megalytero mistho: %.2f\n",max_wage_name,max_wage_surname,max_wage);
  return 0;
}
