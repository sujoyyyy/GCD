#include<stdio.h>
int res;
int gcd(int a , int b)
{	if(b!=0)
	while((a%=b)&&(b%=a));
		return a+b;
}
int fgcd(int ar[],int n)
{

int res=ar[0];
int i=1;
	while(i<n)
	{
	res=gcd(ar[i],res);
	i++;
		if(res==1)
		return 1;
	}
	return res;

}
void main()
{
int n,arr[100];
printf("Enter n :\n");
scanf("%d",&n);
printf("Enter the numbers ");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
res=arr[0];
printf("Gcd of the numbers is: %d",fgcd(arr,n));
}
