
#include<stdio.h>
int n,a[20];
int top=-1;
void push()
{
int e;	
printf("Enter the element: ");
scanf("%d",&e);
a[++top]=e;

}
void pop()
{
if(top==-1)
printf("No elements in stack\n");
else	
top--;

}
void display()
{
if(top==-1)
printf("No elements in stack\n");
else
{	
for(int i=top;i!=-1;i--)
printf("\n%d\n",a[i]);
}
}

void main()
{	
char c;	
while(1)
{
printf("\nEnter Choice\n1.Push\n2.Pop\n3.Display\n4.exit\n");
int ch;

scanf("%d",&ch);
switch(ch)
{
case 1:push();
break;
case 2:pop();
break;
case 3:display();
break;
case 4:
exit(1);
}
}
}


