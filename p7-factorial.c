#include<stdio.h>
int fac(int n){
    int r;
    if(n==0 || n==1){
           return 1;
    }
    else{ 
         r=(n*fac(n-1));
         return  r;
    }
}
int main()
{
    int a,n;
    printf("enter the number");
    scanf("%d",&n);
    a=fac(n);
    
    printf("result= %d",a);
    return 0;
}
