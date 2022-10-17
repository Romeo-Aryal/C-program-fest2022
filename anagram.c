#include <stdio.h>
int check_anagram(char [], char []);//function declaration
int main()
{
  char str1[1000], str2[1000];

  printf("Enter two strings\n");
  gets(str1);
  gets(str2);

  if (check_anagram(str1, str2))
    printf("The strings are Anagrams.\n");
  else
    printf("The strings are not Anagrams.\n");

  return 0;
}

int check_anagram(char a[], char b[])
{
  int first[26] = {0}, second[26] = {0}, c=0;

  while (a[c] != '\0') {
    first[a[c]-'a']++;
    c++;
  }
  c = 0;
  while (b[c] != '\0') {
    second[b[c]-'a']++;
    c++;
  }
  for (c = 0; c < 26; c++)
    if (first[c] != second[c])
      return 0;
  return 1;
}
