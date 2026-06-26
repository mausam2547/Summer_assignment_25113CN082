#include <stdio.h>

int main()
{
  int answer, score = 0;

  printf("===== C Quiz Application =====\n\n");

  // Question 1
  printf("Q1. Which language is known as the mother of all programming languages?\n");
  printf("1. C\n2. Java\n3. Python\n4. HTML\n");
  printf("Enter your answer: ");
  scanf("%d", &answer);

  if(answer == 1)
  score++;

  // Question 2
  printf("\nQ2. Which symbol is used to end a statement in C?\n");
  printf("1. :\n2. ;\n3. ,\n4. .\n");
  printf("Enter your answer: ");
  scanf("%d", &answer);

  if(answer == 2)
  score++;

  // Question 3
  printf("\nQ3. Which function is used to take input in C?\n");
  printf("1. printf()\n2. gets()\n3. scanf()\n4. puts()\n");
  printf("Enter your answer: ");
  scanf("%d", &answer);

  if(answer == 3)
  score++;

  // Question 4
  printf("\nQ4. Which loop is guaranteed to execute at least once?\n");
  printf("1. for\n2. while\n3. do-while\n4. if\n");
  printf("Enter your answer: ");
  scanf("%d", &answer);

  if(answer == 3)
  score++;

  // Question 5
  printf("\nQ5. Which header file is required for printf()?\n");
  printf("1. stdio.h\n2. math.h\n3. string.h\n4. conio.h\n");
  printf("Enter your answer: ");
  scanf("%d", &answer);

  if(answer == 1)
  score++;

  printf("\n===== Quiz Result =====\n");
  printf("Your Score = %d/5\n", score);

  if(score == 5)
  printf("Excellent!\n");
  else if(score >= 3)
  printf("Good Job!\n");
  else
  printf("Keep Practicing!\n");

  return 0;
}