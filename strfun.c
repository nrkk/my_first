#include<stdio.h>



void input(char n[10])
{
scanf("%s",n);

}


void copy(char n1[10],char n3[10])
{

for(int i=0;n1[i]!='\0';i++)
{
n3[i]=n1[i];
}

return;
}

void comp(char n1[10],char n2[10])
{

int cmp=0,i,len1=0,len2=0;
for(int i=0;n1[i]!='\0';i++)
{
len1++;
}
for(int i=0;n2[i]!='\0';i++)
{
len2++;
}

if(len1==len2)
{
for(i=0;n1[i]!='\0';i++)
{
if(n1[i]!=n2[i])
{
cmp=1;
}
}

if(cmp==0)
{
printf("strings are equal\n");
}
if(cmp==1)
{
printf("strings not equal\n");
}

}
else
printf("strings not equal\n");

}



void main()
{

char n1[10]=" ";
char n2[10]=" ";
char n3[10]=" ";
printf("enter string 1\n");
input(n1);

printf("enter string 2\n");input(n2);


copy(n1,n3);
comp(n1,n2);



printf("string 1 copied to string 3:%s\n",n3);






}
