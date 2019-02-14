#include<stdio.h>
#include<stdlib.h>

int main()
{
      int ch;


	while(1)
	{
		printf("\n\n1.Addition");
		printf("\n2.Subtraction");
		printf("\n3.exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:addition();
			       break;
            case 2:subtraction();
			       break;
			case 3:exit(1);
			default:printf("Invalid choice!!!");
		}
	}
	return(0);
	}


///adddition///
addition(int a,int b)
{

   int n[4],m[4],j=0,c=0,sum[100],k=0;
   printf("\nEnter 1st binary number\n");

   for(j=0;j<=3;j++)
   scanf("%d",&m[j]);

   printf("\nEnter 2nd binary number\n");
   for(j=0;j<=3;j++)
   scanf("%d",&n[j]);
   for(j=3;j>=0;j--)
    {
       if(n[j]==0&&m[j]==0&&c==0)
        {
                sum[j]=0;
                c=0;
        }

          else if(n[j]==0&&m[j]==0&&c==1)
               {
                 sum[j]=1;
                  c=0;
               }
            else if(n[j]==0&&m[j]==1&&c==0)
              {
                 sum[j]=1;
                 c=0;

              }

            else if(n[j]==0&&m[j]==1&&c==1)
            {
                sum[j]=0;
                 c=1;

            }
            else if(n[j]==1&&m[j]==0&&c==0)
            {
                sum[j]=1;
                c=0;
                sum[k]=c+sum[k];
            }
            else if(n[j]==1&&m[j]==0&&c==1)
             {
              sum[j]=0;
               c=1;
            }
            else if(n[j]==1&&m[j]==1&&c==0)
            {
                sum[j]=0;
                 c=1;
            }
            else if(n[j]==1&&m[j]==1&&c==1)
            {
                 sum[j]=1;
                  c=1;
            }
        }

                  printf("Carry = %d\n",c);
                  printf("sum= ");
                for(k=0;k<=3;k++)

            printf("%d",sum[k]);



}

/////subtraction////
subtraction(int a1,int b1)
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


}



