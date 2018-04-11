/*Q.33>Write a program to store the info of n Number of students where the values are taken as Name, Roll & Marks.
	Display the Highest Scorer among the Students.
*/
#include<stdio.h>
struct std
{
	int roll;
	int marks;
	char name[50];
};
struct std s[100];
main()
{
	int i,t,n;
	printf("Enter the Number of Students:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the Name of the Student%d:",i+1);
		scanf("%s",s[i].name);
		printf("Enter the Roll No of the Student%d:",i+1);
		scanf("%d",&s[i].roll);
		printf("Enter the Marks of the Student%d:",i+1);
		scanf("%d",&s[i].marks);
	}
	for(i=0;i<n;i++)
		printf("\nstudent%d= %s\troll no= %d\tmarks= %d",(i+1),s[i].name,s[i].roll,s[i].marks);
	int max=s[100].marks;
	for(i=1;i<n;i++)
	{
		if(max<s[i].marks)
		{
			max=s[i].marks;
			t=i;
		}
	}
	printf("\nHighest Scorer: Name= %s,Roll =%d,Marks=%d",s[t].name,s[t].roll,s[t].marks);
}