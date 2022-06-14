#include <stdio.h>
int max(int a, int b) { return (a > b) ? a : b; }
int knapSack(int W, int wt[], int val[], int n)
{
    if (n == 0 || W == 0)
        return 0;
    if (wt[n - 1] > W)
        return knapSack(W, wt, val, n - 1);
    else
        return max(
            val[n - 1]
                + knapSack(W - wt[n - 1],
                        wt, val, n - 1),
            knapSack(W, wt, val, n - 1));
}
int main()
{
   int n,W;
    scanf("%d",&n);
    scanf("%d",&W);
    int val[n],wt[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&val[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&wt[i]);
    }
    printf("%d", knapSack(W, wt, val, n));
}
