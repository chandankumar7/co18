#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void decimal_binary(int);
void binary_decimal(int);
int main()
{
          int num,ch;
	do
	{
		printf("\n1.Decimal to binary");
		printf("\n2.Binary to decimal");
		printf("\n3.exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the decimal number: ");
			       scanf("%d",&num);
			       decimal_binary(num);
			       break;
			case 2:printf("Enter the binary number: ");
			       scanf("%d",&num);
			       binary_decimal(num);
			       break;
			case 3:exit(1);
			default:printf("Invalid choice!!!");
		}
	}while(ch!=4);
	return(0);
	}

void decimal_binary(int n)
{
	int sum=0,i=0,j=0,x,y,num;
	num=n;
	x=sqrt(n*n);
	do
	{
	            sum=sum*10+x%2;
		x=x/2;
		i++;
	}while(x!=0);
	x=sum;

	if(n+(sqrt(n*n))==0)
	{
		x=sum*10+1;
		i++;
	}
	sum=0;
	while(j!=i)
	{
		sum=sum*10+x%10;
		x=x/10;
		j++;
	}
	printf("The binary equivalent of %d is: ",num);
	 printf("%d",sum);
	 printf("\n\n");
}



void binary_decimal(int n)
{
    int sum=0,i=0,num;
    num=n;
    while(n!=0)
    {

        sum=sum+(n%10)*pow(2,i);
        n=n/10;
        i++;
    }
    printf("Decimal equivalent of the binary number %d is:%d",num,sum);
    printf("\n\n");
}

