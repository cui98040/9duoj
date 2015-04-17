#include<stdio.h>
int main()
{
	int T,j,k,m;
	scanf("%d",&T);
	int sumji[T],sumou[T];
	for (m=0;m<T;m++)
	{
		sumji[m]=0;
		sumou[m]=0;
	}
	for(j=0;j<T;j++)
	{

		int N,i;
		scanf("%d ",&N);
		int data[N-1];
		for(i=0;i<N;i++)
		{
			scanf("%d",&data[i]);
			if(data[i]%2==0)
				sumou[j]+=data[i];
			else
				sumji[j]+=data[i];
		}
    }
	for(k=0;k<T;k++)
	{
		printf("%d %d\n",sumji[k],sumou[k]);
	}
}
