#include<stdio.h>
#include<stdlib.h>
struct node
{
int info;
struct node *link;
};
typedef struct node *NODE;
NODE getnode()
{
NODE x;
x=(NODE)malloc(sizeof(struct node));
if(x==NULL)
{
printf("mem full\n");
exit(0);
}
return x;
}
NODE insert_rear(NODE first,int item)
{
NODE temp,cur;
temp=getnode();
temp->info=item;
temp->link=NULL;
if(first==NULL)
return temp;
cur=first;
while(cur->link!=NULL)
cur=cur->link;
cur->link=temp;
return first;
}
void display(NODE first)
{
NODE temp;
if(first==NULL)
printf("list empty");
for(temp=first;temp!=NULL;temp=temp->link)
{
printf("%d\n",temp->info);
}
}
NODE concat(NODE first,NODE second)



{
NODE cur;
if(first==NULL)
return second;
if(second==NULL)
return first;
cur=first;
while(cur->link!=NULL)
cur=cur->link;
cur->link=second;
return first;
}
NODE reverse(NODE first)
{
NODE cur,temp;
cur=NULL;
while(first!=NULL)
{
temp=first;
first=first->link;
temp->link=cur;
cur=temp;
}
return cur;
}
int main()
{
int item,choice,i,n;
NODE first=NULL,a,b;

for(;;)
{
printf("1.Insert_Front\n2.Concatenate\n3.Reverse The List\n4.Dislay\n5.Exit\n");
printf("Enter the choice::");
scanf("%d",&choice);
switch(choice)
{
case 1:printf("Enter the item::");
scanf("%d",&item);
first=insert_rear(first,item);
break;

case 2:printf("Enter the number of nodes in list 1::");

scanf("%d",&n);
a=NULL;
for(i=0;i<n;i++)
{
printf("Enter the item::\n");
scanf("%d",&item);
a=insert_rear(a,item);
}



printf("enter the no of nodes in  list 2::");
scanf("%d",&n);
b=NULL;
for(i=0;i<n;i++)
{
printf("Enter the item::\n");
scanf("%d",&item);
b=insert_rear(b,item);
}
a=concat(a,b);
display(a);
break;
case 3:first=reverse(first);
display(first);
break;
case 4:display(first);
break;
default:exit(0);
}
}

}
