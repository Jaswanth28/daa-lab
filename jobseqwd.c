#include <stdio.h>
int main()
{
    int n,i,k;
    scanf("%d",&n);
    int p[100],d[100];
    for(i=0;i<n;i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&d[i]);
    }
    int ft=0;
    int md=0;
    for(i=0;i<n;i++)
    {
        if(d[i]>md)
        {
            md=d[i];
        }
    }
    int tl[n];
    for(i=1;i<=md;i++)
    {
        tl[i]=-1;
    }
    for(i=1;i<n;i++)
    {
        k=d[i-1];
        while(k>=1)
        {
            if(tl[k]==-1)
            {
                tl[k]=i-1;
                ft=ft+1;
                break;
            }
            k--;
        }
            if(md==ft)
            {
                break;
            }
        }
    int s=0;
    for(i=1;i<=ft;i++)
    {
        s=s+p[tl[i]];
    }
    printf("%d",s);
}
