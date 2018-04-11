//Q.22>Write a C Program using function method to find the L.C.M of given numbers
#include<stdio.h>
int lcm(int a,int b)
{
	int x=a,y=b;
	while(a!=b)
	{
		if(a<b)
			a=a+x;
		else
			b=b+y;
	}
	return y;
}
main()
{
	int a,b,c,d,e;
	printf("Enter the First Number:");
	scanf("%d",&a);
	printf("Enter the Second Number:");
	scanf("%d",&b);
	printf("Enter the Third Number:");
	scanf("%d",&c);
	d=lcm(a,b);
	e=lcm(c,d);
	printf("\n L.C.M of %d, %d and %d is %d",a,b,c,e);
}


/*NOT COMPLETE! ANSWER INCORRECT!!!*/