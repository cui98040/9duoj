#include<stdio.h>
int main()
{
	int n,f[31];
	f[0]=0;
	f[1]=1;
	for(n=2;n<32;n++)
	{
		f[n]=f[n-1]+f[n-2];
	}
	int s;
	while(scanf("%d",&s)!=EOF)
	{
		if (s>=0&&s<=30)
		printf("%d\n",f[s]);
		else
		break;
	}
}
