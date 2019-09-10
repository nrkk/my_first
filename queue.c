#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
};
void
enque (struct Node **head, int new_data)
{
struct Node *new_node = (struct Node *) malloc (sizeof (struct Node));
new_node->data = new_data;
new_node->next = *head;
*head = new_node;
//free(new_node);
return;
}


void deque(struct Node **head)
{
struct Node *temp = (struct Node *) malloc (sizeof (struct Node));
struct Node *prev = (struct Node *) malloc (sizeof (struct Node));
prev=*head;
temp=*head;


while (temp->next!=NULL)
{
prev=temp;
temp = temp->next;
}
prev->next=NULL;
temp->next=NULL;
//free(temp);
//free(prev);
return;
}






void
printlist (struct Node *node)
{
printf("OUTPUT:");
while (node != NULL)
{
printf ("%d ", node->data);
node = node->next;
}
printf("\n");
return;
}



void
main ()
{
struct node *head = NULL;
int n, pos,ch;


while(1)
{
printf ("1.enque:\n2.deque\n3.print\n4.exit\nEnter your choice:\n");
scanf("%d",&ch);

switch(ch)
{
case 1:printf ("enter the numbers to enque:");
scanf ("%d", &n);
enque(&head, n);
break;
case 2:
deque(&head);
break;
case 3:
printlist(head);
break;
case 4:
exit(1);
}
}
}
