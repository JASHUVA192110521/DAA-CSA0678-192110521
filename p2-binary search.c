#include<stdio.h>
int main()
{
    int a[10];
    int x,n,i,j,flag,temp;
    printf("enter the number of elements u want =");
    scanf("%d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    printf("arranging in sorted order\n");
    for(i=0;i<n;i++)
    {
         for(j=0;j<n;j++){
               if(a[i]<a[j]){
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
               }
         }
    }
    for(i=0;i<n;i++)
    {
         printf("%d ",a[i]);
    }
    
    printf("enter the search element=");
    scanf("%d",&x);
    int l=0,h=n;
    int m=(l+h)/2;
    for(i=0;i<n;i++)
    {
         m=(l+h)/2;
         if(x==a[m]){
              flag=1;
              break;
         }
         else if(x>a[m]){
              l=m+1;
              
         }
         else{
              h=m-1;
         }
    }
    if(flag==1){
         printf("elements found at %d location",m);
    }
    else {
         printf("element not found");
    }
}
