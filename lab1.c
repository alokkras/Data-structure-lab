#include<stdio.h>
struct students {
    int age;
    int marks;
    int id;
};
int main()

{
struct students s1;
int n;
int i;
printf("Enter the number of student entries You want to Enter:\n");
scanf("%d",&n);

for(i=0;i<n;i++)
{

printf("Enter the Student ID:\n");
scanf("%d",&s1.id);
printf("Enter the student Age:\n");
scanf("%d",&s1.age);
printf("Enter the Marks of the student:\n");
scanf("%d",&s1.marks);

if(s1.age>20 && s1.marks<100 && s1.marks>0)
{
printf("The Entered data was valid.\n And You are Elligible to take the  admission in the university\n");
printf("Your ID is :%d\n",s1.id);
printf("Your Marks is :%d \n",s1.marks);
printf("Your Age is :%d\n",s1.age);
}
else
{
    printf("You are not Eligible to take admission in this University\n");
}

}


return 0;
}


