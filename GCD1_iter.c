#include<stdio.h>
int gcd(int a , int b)
{	if(b!=0)
	while((a%=b)&&(b%=a));
		return a+b;
}
void main()
{
	int m,n,res;
	printf("Enter first number :");
	scanf("%d",&m);
	printf("Enter second number :");
	scanf("%d",&n);
	res=gcd(m,n);
	printf("The gcd of the numbers is %d",res);	

}
