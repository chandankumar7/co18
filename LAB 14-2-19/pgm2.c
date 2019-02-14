#include<stdio.h>
int main()
{
	int i,c=0,n,n1,n2;
	static int a[10],b[10],s[20];

	printf("Enter number of bits of first number: ");
	scanf("%d",&n1);

	printf("Enter first number\n");
	for(i=n1-1;i>=0;i--)
		scanf("%d",&a[i]);

	printf("Enter number of bits of second number: ");
	scanf("%d",&n2);

	printf("Enter second number\n");
	for(i=n2-1;i>=0;i--)
		scanf("%d",&b[i]);
	if(n1>n2)
		n=n1;
	else
		n=n2;
	for(i=0;i<=n-1;i++)
	{
		if(b[i]==1)
		break;
	}
	i=i+1;
	for(;i<=n-1;i++)
	{
		if(b[i]==1)
		b[i]=0;
		else
		b[i]=1;
	}
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==0 && b[i]==0)
		{
			if(c==0)
			{
				s[i]=0;c=0;
			}
			else
			{
				s[i]=1;c=0;
			}
		}
		else
		if(a[i]==0 && b[i]==1)
		{
			if(c==0)
			{
			s[i]=1;c=0;
			}
			else
			{
				s[i]=0;c=1;
			}
		}
		else
		if(a[i]==1 && b[i]==0)
		{
			if(c==0)
			{
				s[i]=1;c=0;
			}
			else
			{
				s[i]=0;c=1;
			}
		}
		else
		if(a[i]==1 && b[i]==1 && c==1)
		{
			s[i]=1;c=1;
		}
		else
		if(a[i]==1 && b[i]==1 && c==0)
		{
			s[i]=0;c=1;
		}
	}

	printf("Difference=");
	if(c==0)
	{
		for(i=0;i<=n-1;i++)
		{
			if(s[i]==1)
			break;
		}
		i=i+1;
		for(;i<=n-1;i++)
		{
			if(s[i]==1)
			s[i]=0;
			else
			s[i]=1;
		}
	printf("-");
	}
	for(i=n-1;i>=0;i--)
		printf("%d",s[i]);

	return 0;
}
