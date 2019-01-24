#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void hex_binary(int);
void binary_hex(int);
int main()
{
          int num,ch;
	do
	{
		printf("\n1.Binary to hexadecimal");
		printf("\n2.Hexadecimal to binary");
		printf("\n3.exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the binary number: ");
			       scanf("%d",&num);
			       binary_hex(num);
			       break;
			case 2:   printf("Enter number of bits of hexadecimal number : ");
                      scanf("%d",&num);
			          hex_binary(num);
			          break;
			case 3:exit(1);
			default:printf("Invalid choice!!!");
		}
	}while(ch!=4);
	return(0);
	}


void binary_hex(int n)
{

    int bin[10],i,sum=0,rem,num,base=1;
	num=n;//storing the original number//
	while(n!=0)
	{
		   rem=n%10;
			sum=sum+base*rem;
				n=n/10;
			 base=base*2;
	}
	for(i=0;sum>0;i++)
        {
		   bin[i]=sum%16;
		    sum=sum/16;
	    }
	i--;

	printf("The hexadecimal number of %d is:",num);
	   while(i>=0)

        {
		switch(bin[i])
		{
				case 10: bin[i]='A';
				         printf("A");
				         break;
				case 11: bin[i]='B';
				         printf("B");
                         break;
				case 12: bin[i]='C';
			             printf("C");
				         break;
				case 13: bin[i]='D';
				         printf("D");
				         break;
				case 14: bin[i]='E';
				         printf("E");
				         break;
				case 15: bin[i]='F';
				         printf("F");
				         break;
				default: printf(" %d ",bin[i]);
				         break;
			}i--;
		}
	}


void hex_binary(int n)
{

     int i=0,j=-1;
     int bin[4*n];
     char hex[n];
    printf("Enter  hexadecimal  number: ");
    scanf("%s",hex);

 for(i=0;hex[i]!='\0';i++)
{
    switch(hex[i])
    {
        case '0':bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=0;
                break;
        case '1':bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=1;
                break;
        case '2':bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=0;
                break;
        case '3':bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=1;
                break;
        case '4':bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=0;
                break;
        case '5':bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=1;
                break;
        case '6':bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=0;
                break;
        case '7':bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=1;
                break;
        case '8':bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=0;
                break;
        case '9':bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=0;
                 bin[++j]=1;
                break;
        case 'a':bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=0;
                break;
        case 'b':bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=1;
                 bin[++j]=1;
                break;
        case 'c':bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=0;
                break;
        case 'd':bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=0;
                 bin[++j]=1;
                break;
        case 'e':bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=0;
                break;
        case 'f':bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=1;
                 bin[++j]=1;
                break;
    }
}
   printf("The binary number of %s is: ",hex);
    for(i=0;i<=j;i++)
    printf("%d",bin[i]);
}










