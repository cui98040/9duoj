#include <stdio.h> 
int main()
{
		int T,l,z;
		int N,i,j,k,n;
		scanf("%d",&T);
		int jieguo[T];
		int data[N],cha[N-1],shu[N-2];
		for(l=0;l<T;l++)
	{
		scanf("%d",&N);
		for(i=0;i<N;i++)
			scanf("%d",&data[i]);
		for(j=0;j<N-2;j++)
			cha[j]=data[j+1]-data[j];
		for(k=0;k<=N-3;k++)
		{	for(n=1;n<=N-k-2;n++)
				{
				if (cha[k]==cha[k+n])
				shu[k]+=1;
				else
				{break;}
				}
		}
		int x,y,temp=0;
		for(x=N-4;N>=0;N--)
		{
			for(y=0;y<=x;y++)
			{	if (shu[y]>shu[y+1])
				temp=shu[y];
				shu[y]=shu[y+1];
				shu[y+1]=temp;
			}
		}
		jieguo[l]=shu[N-3]+1;
	}
	int o;
	for (o=0;o<T;o++)
	printf("%d\n",jieguo[o]);	
	return 0;
	
}
