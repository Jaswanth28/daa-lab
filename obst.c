#include<stdio.h>
#define MAX 10
int main()
{
    int w[MAX][MAX], c[MAX][MAX], p[MAX], q[MAX];
    int min, min1, n;
    int i,j,k,b;    
    scanf("%d",&n);
    for(i=1; i <= n; i++)
    {
        scanf("%d",&p[i]);
    }
    for(i=0; i <= n; i++)
    {
        scanf("%d",&q[i]);
    }   
    for(i=0; i <= n; i++)
    {
        for(j=0; j <= n; j++)
        {
            if(i == j)
            {
                w[i][j] = q[i];
                 c[i][j] = 0;
            }
        }
    }
    for(b=0; b < n; b++)
    {
        for(i=0,j=b+1; j < n+1 && i < n+1; j++,i++)
        {
            if(i!=j && i < j)
            {
                w[i][j] = p[j] + q[j] + w[i][j-1];
                
                min = 30000;
                for(k = i+1; k <= j; k++)
                {
                    min1 = c[i][k-1] + c[k][j] + w[i][j];
                    if(min > min1)
                    {
                        min = min1;
                    }
                }
                c[i][j] = min;
            }
        }
    }
    printf("%d",c[0][n]);
}
