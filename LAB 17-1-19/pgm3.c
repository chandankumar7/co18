#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>

void hex_binary(int);
void binary_hex(int);
void octal_binary(int);
void binary_octal(int);
void hex_decimal(char []);
void octal_decimal(int);
void decimal_hex(int);
void decimal_octal(int);


int main()
{
          int num,ch;
          char hex[17];


	while(1)
	{
		printf("\n\n1.Binary to hexadecimal");
		printf("\n2.Hexadecimal to binary");
		printf("\n3.Binary octal");
		printf("\n4.Octal to Binary");
		printf("\n5.Hexadecimal to decimal");
		printf("\n6.Octal to Decimal");
		printf("\n7.Decimal to Hexadecimal");
		printf("\n8.Decimal to Octal");
		printf("\n9.exit");
		printf("\n\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:printf("Enter the binary number: ");
			       scanf("%d",&num);
			       binary_hex(num);
			       break;
            case 2:printf("Enter number of bits of hexadecimal number : ");
                   scanf("%d",&num);
                   hex_binary(num);
                   break;
            case 3:printf("Enter the binary number: ");
			       scanf("%d",&num);
			       binary_octal(num);
			       break;
           case 4: printf("Enter the octal number: ");
			       scanf("%d",&num);
			       octal_binary(num);
			        break;
           case 5:printf("Enter hexadecimal number : ");
                   scanf("%s",hex);
                   hex_decimal(hex);
			       break;
           case 6:printf("Enter any octal number: ");
                  scanf("%d", &num);
                  octal_decimal(num);
			       break;
           case 7:printf("Enter decimal number: ");
                  scanf("%d", &num);
                  decimal_hex(num);
			       break;
          case 8:printf("Enter decimal number: ");
                  scanf("%d", &num);
                  decimal_octal(num);
			       break;

			case 9:exit(1);
			default:printf("Invalid choice!!!");
		}
	}
	return(0);
	}


void binary_hex(int n)
{

    int bin[10],i=0,sum=0,num;
	num=n;//storing the original number//
	while(n!=0)
	{

			sum=sum+(n%10)*pow(2,i);
				n=n/10;
				i++;

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

void binary_octal(int n)
{
     int num, sum=0, b=1;
         num=n;
    while (n!=0)
    {
        sum = sum+(n%10)*b;
        b = b*2;
        n= n/10;
    }
    printf("the octal value of %d is : ",num);
    printf("%d",sum);
}

void octal_binary(int n)
{
    int sum= 0, i = 0;
    int sum1= 0;
    while(n!= 0)
    {
	 sum=sum+(n%10)*pow(8,i);
	  i++;
	 n= n/10;
    }

    i=1;

    while (sum!=0)
    {
	    sum1 = sum1+(sum%2)*i;
	    sum=sum/ 2;
	    i=i*10;
    }

 printf("Equivalent binary number is: %d",sum1);
 printf("\n\n");
}


void hex_decimal(char hex[])
{

   int d,place;
   int i=0,val,len;
   d=0;
   place=1;
   len=strlen(hex);
   len--;
       for(i=0;hex[i]!='\0';i++)
       {
            if(hex[i]>='0' && hex[i]<='9')
             {
                val=hex[i]-48;
             }
       else if(hex[i]>='a' && hex[i]<='f')
            {
               val=hex[i]-97+10;
            }
       else if(hex[i]>='A' && hex[i]<='F')
           {
               val=hex[i]-65+10;
           }
       d+=val*pow(16,len);
       len--;
}

        printf("Decimal=%d",d);
        printf("\n\n");
}

void octal_decimal(int n)
{
    int sum=0,num;
    int i=0;
     num=n;
    while (n!=0)
    {
        sum=sum+(n%10)*pow(8,i++);
        n=n/10;
    }
    printf("The decimal number of %d is=",num);
    printf("%d",sum);
}


void decimal_hex(int n)
{

    int t,d=0,m,l;
	int tmp;
    char s;
	t=n;
        for(l=t;l>0;l=l/16)
        {
		     tmp = l % 16;
		     if( tmp < 10)
                    tmp =tmp + 48; else
                    tmp = tmp + 55;
                    d=d*100+tmp;
        }
          printf("\nThe equivalent Hexadecimal Number : ");
         for(m=d;m>0;m=m/100)
            {
               s=m%100;
               printf("%c",s);
            }
    printf("\n\n");
}


void decimal_octal(int n)
{
    // array to store octal number
    int Num[100];
    int j;

    // counter for octal number array
    int i = 0;
    while (n != 0)
    {
       // storing remainder in octal array
        Num[i]=n% 8;
        n = n/8;
        i++;
    }
    // printing octal number array in reverse order
    printf("The octal value: ");
    for ( j = i - 1; j >= 0; j--)
        printf("%d",Num[j]);
        printf("\n\n");
}
