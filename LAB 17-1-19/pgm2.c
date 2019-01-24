#include<stdio.h>
int main()
{
    int n,i=0,j=-1;
    printf("Enter number of bits of hexadecimal number : ");
    scanf("%d",&n);
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

return 0;

}
