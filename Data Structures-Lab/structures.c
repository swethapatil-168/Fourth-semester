#include <stdio.h>
#define SIZE 100
int i;
 typedef struct student
{
    int id;
    int age;
    int marks;
}stud;
void accept_input(stud s1)
{
    printf("Enter the id:\n");
    scanf("%d",&s1.id);
     printf("Enter the age:\n");
     scanf("%d",&s1.age);
      printf("Enter the marks:\n");
      scanf("%d",&s1.marks);
}
void display_output(stud s1)
{
    printf("The student details are:\n");
    printf("Id:%d\n",s1.id);
    printf("Age:%d\n",s1.age);
    printf("Marks:%d\n",s1.marks);
}
int main()
{
    stud s[SIZE];
    int i,n;
    printf("Please enter the number of students\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        accept_input(s[i]);
    }
    if(s[i].marks<0 || s[i].marks>100 || s[i].age<20)
        printf("Enter the valid data. Data is valid for age greater than 20\n");
    if(s[i].marks>=0 && s[i].marks<=100 && s[i].age>20)
    {
        for(i=0;i<n;i++)
            display_output(s[i]);
    }
    if(s[i].marks>=65)
        printf("congratulations you are qualified for admission\n");
        else
            printf("We are sorry, you are not qualified for admission\n");
            return 0;
}
    
	
