#include<stdio.h>
int
main ()
{

  int a[10][10], b[10][10];
  int r, c;
  printf ("enter rows and columns:");
  scanf ("%d %d", &r, &c);
  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }



  for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
	{

	  if (i == j || (i + j == r - 1))
	    {
	      printf ("  %d", a[i][j]);
	    }
	  else
	    printf ("  ");
	}
      printf ("\n");
    }
  return 0;
}
