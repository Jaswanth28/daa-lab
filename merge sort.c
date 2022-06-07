#include<stdio.h>
#include<stdlib.h>
void merge(int a[],int p,int q,int r)
{
    int n1 = q - p + 1;
      int n2 = r - q;

  int L[n1], M[n2];

  for (int i = 0; i < n1; i++)
    L[i] = a[p + i];
      for (int j = 0; j < n2; j++)
    M[j] = a[q + 1 + j];
      int i, j, k;
      i = 0;
      j = 0;
      k = p;
      while (i < n1 && j < n2) {
    if (L[i] <= M[j]) {
      a[k] = L[i];
      i++;
    } else {
      a[k] = M[j];
      j++;
    }
    k++;
  }
    while (i < n1) {
    a[k] = L[i];
    i++;
    k++;
  }

  while (j < n2) {
    a[k] = M[j];
    j++;
    k++;
  }
}
void mergesort(int a[],int l,int h)
{
    if(l<h)
    {
        int m=l+(h-l)/2;
        mergesort(a,l,m);
        mergesort(a,m+1,h);
        merge(a,l,m,h);
    }
}
void ps(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
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
    int s=n-1;
    mergesort(a,0,s);
    ps(a,n);
}
