/*Q.05>>Read Marks of P,C and M of a Student and calculate the average and grade.
Write a C Program to print the grade acording to the following table.
				AVERAGE				GRADE
				>=90				O
				<90&>=80			A
				<80&>=70			B
				<70&>=60			C
				<50					FAIL
*/
#include<stdio.h>
main()
{
	float p,c,m,avg;
	printf("Enter the marks of Physics:");
	scanf("%f",&p);
	printf("Enter the marks of Chemistry:");
	scanf("%f",&c);
	printf("Enter the marks of Mathematics:");
	scanf("%f",&m);
	avg=(p+c+m)/3;
	printf("Your Average is %.2f\n",avg);
	if(avg>=90&&avg<=100)
		printf("You are Outstanding!");
	else if(avg>=80&&avg<90)
		printf("You are Execellent!");
	else if(avg>=70&&avg<80)
		printf("You are Amazing!");
	else if(avg>=60&&avg<70)
		printf("You are Believing!");
	else if(avg>=50&&avg<60)
		printf("You are Compromising!");
	else if(avg>=0&&avg<50)
		printf("Sorry! You did not score well!");
	else
	{
		printf("ERROR in NUMBERS!!!");
		getch(0);
	}
}