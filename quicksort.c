#include<stdio.h>

int par(int a[],int f,int l)
{
    int pvt=a[l];
    int i,j;
    i=f-1;
    for(j=f;j<l;j++)
    {
        if(pvt>=a[j])
        {
            i=i+1;
            int temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }}{
            i=i+1;
            int temp=a[i];
            a[i]=a[l];
            a[l]=temp;
        return i;
        }
    }
void sort(int a[],int f,int l)
{
    if(f<l)
    {
        int pos=par(a,f,l);
        sort(a,f,pos-1);
        sort(a,pos+1,l);
    }
}
int main()
{
    int n;
    int a[50];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int f=0;
    int l=n-1;
    sort(a,f,l);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
