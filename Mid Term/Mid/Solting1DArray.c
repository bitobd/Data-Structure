#include<stdio.h>
int main()
{
    int i,j,temp,n;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}
