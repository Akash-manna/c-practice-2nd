/*Q.33>Write a program to store the info of n Number of students where the values are taken as Name, Roll & Marks.
	Display the Highest Scorer among the Students.
*/
#include<stdio.h>
struct student
{
     int roll;
     char sname[20];
     int marks;
}stu[10];
int main()
{
     int i,high,n;
     printf("How many Student info you want to accept : ");
     scanf("%d",&n);
     printf("-----------------------------\n");
     printf("Enter details for %d  students:",n);
     printf("\n-----------------------------\n");
     for(i=0;i<n;i++)
     {
          printf("Student Roll Number: ");
          scanf("%d",&stu[i].roll);
          printf("Name               : ");
          scanf("%s",stu[i].sname);
          printf("Marks              : ");
          scanf("\n %d",&stu[i].marks);
          printf("-----------------------------\n");
     }
     high=stu[0].marks;
     for(i=0;i<n;i++)
     {
          if(stu[i].marks>high)
          high=stu[i].marks;
     }
     printf("Highest scored student details:");
     printf("\n-----------------------------\n");
     printf("ROLLNO    NAME  MARKS\n");
     for(i=0;i<n;i++)
     {
          if(stu[i].marks==high)
          printf("\n %d\t %s\t%d",stu[i].roll,stu[i].sname,stu[i].marks);
     }
     return 0;
}