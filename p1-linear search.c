#include<stdio.h>
int main()
{
    int a[10];
    int x,n,i,flag=0;
    printf("enter the number of elements u want =");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("enter the search element=");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
         if(x==a[i]){
              flag=1;
              break;
         }
    }
    if(flag==1){
         printf("elements found at %d location",i);
    }
    else {
         printf("element not found");
    }
}
