#include<stdio.h>
void main()
{

int a[10]={1,2,3,4,5,6,7,8,9};

a=a++;
for(int i=0;i<3;i++)
{

printf("%d",a[i]);


}

}
