#include<stdio.h>
int add(int a,int b)
{
int sum;
sum=a+b;
return sum;
}
int sub(int a,int b)
{
int sum;
sum=a-b;
return sum;
}
int mul(int a,int b)
{
int sum;
sum=a*b;
return sum;
}
float div(float a,float b)
{
float sum;
sum=a/b;
return sum;
}

int mod(int a,int b)
{
int sum;
sum=a%b;
return sum;

}
int main()
{
int a,b,ad,su,mu,mo;
float di;
printf("enter 2 no.\n");
scanf("%d %d",&a,&b);
ad=add(a,b);
printf("sum:%d \n",ad);

su=sub(a,b);
printf("diff:%d \n",su);

mu=mul(a,b);
printf("product:%d \n",mu);

di=div(a,b);
printf("division:%.2f\n",di);

mo=mod(a,b);
printf("remainder:%d\n",mo);

return 0;
}

