
#include<stdio.h>
int n,a[20];
int front=-1,rear=-1,size=3;
void enque()
{
int e;	
if ((front == 0 && rear == size-1) || 
            (rear == (front-1)%(size-1))) 
    { 
        printf("\nQueue is Full");rear=0;
	printf("Enter the element: ");
	scanf("%d",&e);
	a[rear]=e;
	
        
    } 

if(front==-1)
{
front=rear=0;
printf("Enter the element: ");
scanf("%d",&e);
a[rear]=e;
}
else if (rear == size-1 && front != 0) 
    {   printf("Enter the element: ");
	scanf("%d",&e);
        rear = 0; 
        a[rear] = e; 
    } 
  
    else
    { 	printf("Enter the element: ");
	scanf("%d",&e);
        rear++; 
        a[rear] = e; 
    } 
}
void deque()
{
if(front==-1)
printf("No elements in queue\n");
	
int data=a[front];
a[front]=-1;
if (front == rear) 
    { 
        front = -1; 
        rear = -1; 
    } 
    else if (front == size-1) 
        front = 0; 
    else
        front++; 
  
 
}
void display()
{
 if (front == -1) 
    { 
        printf("\nQueue is Empty"); 
        return; 
    } 
    printf("\nElements in Circular Queue are: "); 
    if (rear >= front) 
    { 
        for (int i = front; i <= rear; i++) 
            printf("%d ",a[i]); 
    } 
    else
    { 
        for (int i = front; i < size; i++) 
            printf("%d ", a[i]); 
  
        for (int i = 0; i <= rear; i++) 
            printf("%d ", a[i]); 
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


