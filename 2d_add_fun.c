#include<stdio.h>
void
input (int a[3][3])
{

  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  scanf ("%d", &a[i][j]);
	}
    }
  return;
}

void
add (int a[3][3], int b[3][3], int c[3][3])
{

  for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  c[i][j] = a[i][j] + b[i][j];
	}

    }
  return;
}

void print(int c[3][3])
{

for (int i = 0; i < 3; i++)
    {
      for (int j = 0; j < 3; j++)
	{
	  printf ("%d ", c[i][j]);
	}
      printf ("\n");
    }
return;
}

int
main ()
{

  int a[3][3], b[3][3], c[3][3];

  input (a);
  input (b);
  add (a, b, c);
  print(c);

  return 0;
}
