#include<stdio.h>
#include<stdlib.h>

int gcd(int m , int n )
{	int a = m,b=n;
	if(a==0)
		return b;
	else if(b==0)
		return a;
	else
	{


		if( (a%2==0) && (b%2==0))

		{
			return 2 *gcd(a/2,b/2);

		}
		else if((a%2!=0) && (b%2!=0))

		{	

			if(a==b)
				return a;
			else
				if(a<b)
					return gcd(a,(b-a)/2);
				else
					return gcd(b,(a-b)/2);




			}
			else
			{
				if(a%2==0)
					return gcd(b,a/2);
				else
					return gcd(a,b/2);



			}
		}
	}

	int main()
	{	int c = gcd(13,17);
		printf("%d",c);
		return 0;
	}