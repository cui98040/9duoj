#include<stdio.h>
int jiouhe()
{
	int N,i,sumji=0,sumou=0;
	scanf("%d ",&N);
	int data[N-1];
	for(i=0;i<N;i++)
	{
		scanf("%d",&data[i]);
		if(data[i]%2==0)
			sumou+=data[i];
		else
			sumji+=data[i];
	}
	printf("%d %d",sumji,sumou);
} 
int main()
{
	int T,j;
	scanf("%d",&T);
	for(j=0;j<T;j++)
	jiouhe();
}
