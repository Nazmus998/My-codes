#include <stdio.h>
int main ()
{
    int m,n,mul;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(m=1;m<=10;m++)
    {
        mul=m*n;
        printf("%d*%d=%d\n",m,n,mul);
        
    }
    //printf("%d*%d=%d\n",mul);
}