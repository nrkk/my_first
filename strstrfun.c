#include<stdio.h>


void main()
{
char n1[]="bicyclerickshaw";
char n2[]="cycle";
int flag=0,i,j=0,len2=0,count=0,d,c=0;

for(int i=0;n2[i]!='\0';i++)
{
len2++;
}

for(i=0;n1[i]!='\0';i++)
{

while(n2[j++]==n1[i++])
{
count++;
}
//printf("%d\n",i);
if(count==len2)
{
printf("%d\n",i);
c=i;

}


}

printf("%d\n",c);
d=c-len2;


for(int i=d;n1[i]!='\0';i++)
{
printf("%c",n1[i]);
}

}
