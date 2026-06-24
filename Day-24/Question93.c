#include <stdio.h>

int main()
{
  char str1[100], str2[100], temp[200];
  int i, j, len1 = 0, len2 = 0, found = 0;

  printf("Enter first string: ");
  scanf("%s", str1);

  printf("Enter second string: ");
  scanf("%s", str2);

  // Find lengths
  while(str1[len1] != '\0')
  len1++;

  while(str2[len2] != '\0')
  len2++;

  // Lengths must be equal
  if(len1 != len2)
  {
    printf("Strings are not rotations");
    return 0;
  }

  // Create temp = str1 + str1
  for(i = 0; i < len1; i++)
  temp[i] = str1[i];

  for(i = 0; i < len1; i++)
  temp[len1 + i] = str1[i];

  temp[2 * len1] = '\0';

  // Check if str2 exists in temp
  for(i = 0; temp[i] != '\0'; i++)
  {
    for(j = 0; str2[j] != '\0'; j++)
    {
      if(temp[i + j] != str2[j])
      break;
    }

    if(str2[j] == '\0')
    {
      found = 1;
      break;
    }
  }

  if(found)
  printf("Strings are rotations");
  else
  printf("Strings are not rotations");

  return 0;
}