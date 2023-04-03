#include <stdio.h>
#include <string.h>

typedef struct{
  char manufacturer[50];
  char model[50];
  char cpu[50];
  float price;
}computer;

int main(){
  computer pc1;
  printf("Doste ta stoixeia toy ypologisti sas\n");
  printf("\nKataskeuastis: ");
  scanf("%s",pc1.manufacturer);
  printf("\nMontelo: ");
  scanf("%s",pc1.model);
  printf("\nEpeksergastis: ");
  scanf("%s",pc1.cpu);
  printf("\nTimi: ");
  scanf("%f",&pc1.price);
  printf("\n");
  printf("Kataskeuastis: %s\nMontelo: %s\nEpeksergastis: %s\nTimi: %.2f",pc1.manufacturer,pc1.model,pc1.cpu,pc1.price);
  return 0;
}
