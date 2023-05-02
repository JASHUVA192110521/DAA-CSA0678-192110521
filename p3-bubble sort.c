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
         for(j=i+1;j<n;j++){
               if(a[i]>a[j]){
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
}
