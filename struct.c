#include<stdio.h>

struct emp{
char name[20];
int age;
float salary;
char *ph;
};

void main()
{
struct emp e1;

printf("enter name:\n");
scanf("%s",e1.name);
printf("enter age:\n");
scanf("%d",&e1.age);
printf("enter salary:\n");
scanf("%f",&e1.salary);
printf("enter ph. no.:\n");
scanf("%s",e1.ph);


printf("name:%s age:%d salary:%f ph.no.%s",e1.name,e1.age,e1.salary,e1.ph);

}
