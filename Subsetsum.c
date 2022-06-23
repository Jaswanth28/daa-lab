#include<stdio.h>
#include<stdlib.h>

int d,w[10],x[10],n;

void sum_sets(int s,int i,int sumd){
	int k;
	x[i]=1;
	if(s+w[i]==d){
		for(k=0;k<=i;k++){
			if(x[k]==1)
				printf("%d ",w[k]);
		}
		printf("\n");
	}else if(s+w[i]+w[i+1]<=d)
		sum_sets(s+w[i],i+1,sumd-w[i]);
	if(s+sumd-w[i]>=d && s+w[i]<=d){
		x[i]=0;
		sum_sets(s,i+1,sumd-w[i]);
	}
}


int main(){
	int i,sumd;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&w[i]);
		sumd+=w[i];
		x[i]=0;
	}
	scanf("%d",&d);
	sum_sets(0,0,sumd);
}
