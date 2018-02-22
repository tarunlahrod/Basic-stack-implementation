#include<iostream.h>
#include<conio.h>
struct node
{
int data;
node *next;
}*top;

void create_node()
{
node *ptr;
ptr=new node;
ptr->next=NULL;
top=ptr;
cout<<"\nEnter data :";
cin>>ptr->data;
}


void push()
{
node *ptr;
ptr= new node;
ptr->next=top;
top=ptr;
cout<<"\nEnter data :";
cin>>ptr->data;
}

void pop()
{
node *temp;
temp=top;
top=top->next;
delete(temp);
}

void display()
{
cout<<"\n\n		";
cout<<"TOP-->";
node *temp;
temp=top;
while(temp->next!=NULL)
{
cout<<"|"<<temp->data<<"|-->";
temp=temp->next;
}
cout<<"NULL";
cout<<"\n\n";
}


void main()
{
int choice;
tag:
cout<<"\nEnter your choice...\n";
cout<<"\n1. Create first node";
cout<<"\n2. Push";
cout<<"\n3. Pop";
cout<<"\n4. Display....";

cin>>choice;

switch (choice)
{
case 1: { create_node(); break;}
case 2: { push(); break; }
case 3: { pop(); break; }
case 4: { display(); break; }
default:
{
cout<<"\nINVALID CHOICE! Re-enter please\n\n";
goto tag;
}
}
goto tag;
getch();
}