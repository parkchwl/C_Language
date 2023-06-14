#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char str[] = "This is sample string for test.";
  char *p = str;
  while (*p != '\0')
  {
    if (isspace(*p))
    {
      char *q = NULL;
      for (q = p + 1; *q != '\0'; q++)
        *(q - 1) = *q;
      *(q - 1) = 0;
    }
    p++;
  }
  puts(str);
}