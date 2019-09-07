#include<stdio.h>
#include<string.h>


void main()
{
char n1[]="ranjith";
char n2[10]=" ";
char n3[10]=" ";
char n4[]="bicyclerickshaw";
char n5[]="cycle";
char *p;
strcpy(n2,n1);
printf("original string:%s\n",n1);
printf("copied string:%s\n",n2);

strncpy(n3,n5,2);
printf("original string:%s\n",n5);
printf("copied string:%s\n",n3);

p=strstr(n4,n5);

printf("the first occurance of %s in %s is from %s\n",n5,n4,p);

}
