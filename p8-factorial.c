#include<stdio.h>
int main()
{
    int a,n,i=1,fact=1;
    printf("enter the number");
    scanf("%d",&n);
    while(i<=n)
    {   
        fact=fact*i;
        i=i+1;
    }  
    printf("result= %d",fact);
    return 0;
}
