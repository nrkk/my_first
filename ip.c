#include<stdio.h>
#include<string.h>
void
main ()
{
  char a[100];
  char b[100][100] = { '\0' };
  int i = 0, j = 0, k = 0;
  gets (a);
  while (a[i] != '\0')
    {
      if (a[i] == '.')
	{
	  k++;
	  i++;
	  j = 0;
	}
      if (a[i] != '\0')
	{
	  b[k][j++] = a[i++];

	}
    }
  for (i = 0; i <= k; i++)
    {
      printf ("%s\n", b[i]);
    }



  if ((atoi (b[0]) > 0) && (atoi (b[0]) <= 127))
    {
      printf ("class a\n");
    }
  if ((atoi (b[0]) >= 128) && (atoi (b[0]) < 192))
    {
      printf ("class b\n");
    }

  if ((atoi (b[0]) >= 192) && (atoi (b[0]) < 224))
    {
      printf ("class c\n");
    }

  if ((atoi (b[0]) >= 224) && (atoi (b[0]) < 240))
    {
      printf ("class d\n");
    }

  if ((atoi (b[0]) >= 240) && (atoi (b[0]) < 255))
    {
      printf ("class e\n");
    }
}
