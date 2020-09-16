#include<stdio.h>
int com=1;
int lcm(int a , int b)
{
	if(com % a == 0 && com % b == 0)
	{
		return com;
	
	}	
	com++;
	lcm(a,b);
	return com;

	
}
void main()
{
	int m,n,res,lcm1;
	printf("Enter first number :");
	scanf("%d",&m);
	printf("Enter second number :");
	scanf("%d",&n);
	lcm1=lcm(m,n);
	res = (m*n)/lcm1;
	printf("The gcd of the numbers is %d",res);	

}
