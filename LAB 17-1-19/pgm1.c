
//program to covert binary to hexadecimal//

#include<stdio.h>
#include<math.h>
  int main()
 {
	int bin[10],i,sum=0,rem,n,num,base=1;
	printf("Enter the binary number: ");
	scanf("%d",&n);
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
		return 0;
	}
