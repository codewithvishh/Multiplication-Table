#include<stdio.h>
int main()
{
    int n,i=1,b;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=10)
    {
        b=n*i;
        printf("%d*%d=%d\n",n,i,b);
        i++;
    }
    return 0;
}