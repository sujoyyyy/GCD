#include<stdio.h>
int min;
int lcm(int a , int b)
{
	
	for(int i =a*b;i>=1;i--)
	if(i%a==0 && i%b==0)
	min = i ;
	return min;

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
