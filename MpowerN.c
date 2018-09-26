//Q.20>Write a Program using function method to calculate M^n where M and n are given by user.
//#include<stdio.h>
/*int power(int,int,int);
int main()
{
	int m,n,a;
	printf("We are going to find the value of M^n.\n");
	printf("Enter the value of M:");
	scanf("%d",&m);
	printf("Enter the value of N:");
	scanf("%d",&n);
	//Here, two arguments in the form of variables m and n are being passed to the power() method from the main() method
	power(m,n,a);
	//printf("%d^%d=%d",m,n,a);
}
int power(int m,int n,int a)
{
	int i;
	for(i=0;i<=n;i++)
	{
		a=a *m;
		n--;
	}
	//return a;
	printf("%d ^ %d is %d",m,n,a);
	/*int i;
	for(i=1;i<=n;i++)
		a=a*m;
	return a;
}*/
#include <stdio.h>
//Here, We are telling the GCC Compiler to allocate memory for the power() method with three integer type variables.
int power(int,int,int);
int main()
{
    int m, n;

    //long long result = 1;
	int a = 1;
	printf("We are going to find the value of M^N.\n");
	printf("Enter the value of M:");
    scanf("%d", &m);
	printf("Enter the value of N:");
    scanf("%d", &n);
	//Here, three arguments in the form of variables m and n are being passed to the power() method from the main() method
	power(m,n,a);
	return 0;
}
int power(int m, int n, int a)
{
	while(n!=0)
	{
		a *= m;
		--n;
	}
	printf("Result = %d",a);
}