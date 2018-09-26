//Q.22>Write a C Program using function method to find the L.C.M of given numbers
#include<stdio.h>
int lcm(int a, int b)
{
	int i,gcd,lcm;
	for(i=1; i <= a && i <= b; ++i)
    {
        // Checks if i is factor of both integers
        if(a%i==0 && b%i==0)
            gcd = i;
    }

    lcm = (a*b)/gcd;
    return lcm;
}
int main()
{
	int a,b,c,d,e;
	printf("Enter the First Number:");
	scanf("%d",&a);
	printf("Enter the Second Number:");
	scanf("%d",&b);
	printf("Enter the Third Number:");
	scanf("%d",&c);
	d=lcm(a,b);
	e=lcm(d,c);
	printf("\n L.C.M of %d, %d and %d is %d",a,b,c,e);
	return 0;
}


/*COMPLETE!!!*/