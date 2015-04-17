#include<stdio.h>
int main()
{
	int a1,b[5];
	for(;scanf("%d%d%d%d%d%d",&a1,&b[0],&b[1],&b[2],&b[3],&b[4])!=EOF;)
	{
		int sum=0,i;
		for(i=0;i<5;i++)
		{
			if (a1>b[i])
			sum+=b[i];
			
		}
		printf("%d\n",sum);
	}
}
