        //sum of binary numbers//
        #include<stdio.h>
        #include<math.h>

        int main()
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

        //sum[k]=c+sum[k];

        }

        else if(n[j]==0&&m[j]==0&&c==1)
        {

        sum[j]=1;

        c=0;

        //sum[k]=c+sum[k];

        }

        else if(n[j]==0&&m[j]==1&&c==0)
        {

        sum[j]=1;

        c=0;

        //sum[k]=c+sum[k];

        }

        else if(n[j]==0&&m[j]==1&&c==1)
        {

        sum[j]=0;

        c=1;

        //sum[k]=c+sum[k];

        }

        else if(n[j]==1&&m[j]==0&&c==0)
        {

        sum[j]=1;

        c=0;

        //
        sum[k]=c+sum[k];

        }

        else if(n[j]==1&&m[j]==0&&c==1)
        {

        sum[j]=0;

        c=1;

        //sum[k]=c+sum[k];

            }

        else if(n[j]==1&&m[j]==1&&c==0)
        {

        sum[j]=0;

        c=1;

        //sum[k]=c+sum[k];

        }

        else if(n[j]==1&&m[j]==1&&c==1)
        {

        sum[j]=1;

        c=1;

        // sum[k]=c+sum[k];

        }

        }

        printf("Carry = %d\n",c);

              printf("sum: ");
            for(k=0;k<=3;k++)

        printf("%d",sum[k]);

         return 0;

        }
