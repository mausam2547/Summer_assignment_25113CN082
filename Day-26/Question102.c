#include <stdio.h>

int main()
{
  char name[50];
  int age;   //name stores voter name, age stores voter age

  printf("Enter your name: ");
  scanf("%s", name);

  printf("Enter your age: ");
  scanf("%d", &age);

  //Check voting eligibility
  if(age >= 18)
  {
    printf("\n%s is Eligible to Vote.\n", name);
  }
  else
  {
    printf("\n%s is Not Eligible to Vote.\n", name);
    printf("You can vote after %d year(s).\n", 18 - age);
  }

  return 0;
}