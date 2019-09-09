#include<stdio.h>
#include<string.h>
void
reverse2 (char *start, char *end)
{
  char temp;
  while (start < end)
    {
      temp = *start;
      *start++ = *end;
      *end-- = temp;
    }

}


void
reverse1 (char *s)
{
  char *start = s;
  char *end = s;


  while (*end)
    {
      end++;
      if (*end == '\0')
	{
	  reverse2 (start, end - 1);
	}
      else if (*end == ' ')
	{
	  reverse2 (start, end - 1);
	  start = end + 1;
	}
    }


  reverse2 (s, end - 1);
}



void
main ()
{
  char s1[] = "Anubhav is trainer";
  char *temp ;
  temp=s1;
   printf ("before reverse:%s\n", s1);
  reverse1 (s1);
  printf ("after reverse:%s\n", s1);
}

