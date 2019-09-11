
#include<stdio.h>
int n,a[20];
int front=-1,rear=-1;
void enque()
{
int e;	
if(front==-1)
front=0;
printf("Enter the element: ");
scanf("%d",&e);
rear=rear+1;
a[rear]=e;

}
void deque()
{
if(front==-1)
printf("No elements in queue\n");
else	
front=front+1;
}
void display()
{
if(front==-1)
printf("No elements in stack\n");
else
{	
for(int i=front;i<=rear;i++)
printf(" %d ",a[i]);
}
}

void main()
{	
char c;	
while(1)
{
printf("\nEnter Choice\n1.Enque\n2.Deque\n3.Display\n4.exit\n");
int ch;

scanf("%d",&ch);
switch(ch)
{
case 1:enque();
break;
case 2:deque();
break;
case 3:display();
break;
case 4:
exit(1);
}
}
}


