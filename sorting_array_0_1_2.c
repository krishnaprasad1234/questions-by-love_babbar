#include<stdio.h>


void sorting(int arr[],int n)
{
    int count_0=0,count_1=0,count_2=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]==0)
       {
           count_0++;
       }
       if(arr[i]==1)
       {
           count_1++;
       }
       if(arr[i]==2)
       {
           count_2++;
       }
    }
    int i,k=0;
    for(i=0;i<count_0;i++)
    {
        arr[k]=0;
        k++;
    }
    for(i=0;i<count_1;i++)
    {
        arr[k]=1;
        k++;
    }
    for(i=0;i<count_2;i++)
    {
        arr[k]=2;
        k++;
    }
}
int main()
{
    int n;
    int arr[10];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sorting(arr,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}