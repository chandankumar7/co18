#include<stdio.h>
void decimal_binary(int );
void binary_decimal(int );

int main()
{
      int n,choice;
      do
      {
         printf("\n Enter the following option");
         printf("\n2.Binary to decimal");
         printf("\n1.Decimal to binay");
         printf("\n3.exit");
         printf("\nEnter the choice: ");
         scanf("%d",&choice);
         switch(choice)
         {

         case 1: printf("Enter the binary number: ");
                 scanf("%d",&n);
                 decimal_binary(n);
                 break;

         case 2: printf("Enter the decimal number: ");
                 scanf("%d",&n);
                 binary_decimal(n);
                 break;
        case 3: exit(1);
                break;
         default:printf("Invaild choice");
         }
      }while(choice!=3);

}


     void binary_decimal(int num)
     {
           int rem,decimal=0,base=1,n;
               n=num;
              while(num!=0)
            {
              rem=num%2;
              decimal=decimal+rem*base;
              num=num/10;
              base=base*2;
            }
            printf("The decimal equivalent of %d is %d",n,decimal);

    }



 void decimal_binary(int n)
 {
      int i,j,p[10],num;
      num=n;

      for(i=0;n>0;i++)
      {
           p[i]=n%2;
           n=n/10;
      }
       printf("The binary equivalent of %d: ",num);
        for(j=i-1;j>=0;j--)
         printf("%d",p[j]);



 }


