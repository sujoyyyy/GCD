#include<stdio.h>
int c,i=1,max=1;

int gcd(int a,int b)
{
	if(i>c)
	return max;
	if((a%i==0)&&(b%i==0))
		max=i;
		i++;
	return gcd(a,b);	



}
void main()
{
	int m,n,res;
	printf("Enter first number :");
	scanf("%d",&m);
	printf("Enter second number :");
	scanf("%d",&n);
	if(m<n)
	c=m;
	else
	c=n;
	res=gcd(m,n);
	printf("The gcd of the numbers is %d",res);	

}
