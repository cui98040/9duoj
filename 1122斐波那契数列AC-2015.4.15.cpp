#include <stdio.h>
int main()
{
	int s[21],N;
	s[0]=1;
	s[1]=1;
	int i;
	for(i=2;i<21;i++)
	{
		s[i]=s[i-1]+s[i-2];
	}
	while (scanf("%d",&N)==1)
	{
		if(N<=0||N>=20)
		break;
		else
		printf("%d\n",s[N]);
	}
}
