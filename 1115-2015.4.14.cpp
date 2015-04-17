#include<stdio.h>
int main()
{
	int s[6];
	while(scanf("%d %d %d %d %d %d",&s[0],&s[1],&s[2],&s[3],&s[4],&s[5])!=EOF)
	{
		if (s[0]>100||s[1]>100||s[2]>100||s[3]>100||s[4]>100||s[5]>100||s[0]<1||s[1]<1||s[2]<1||s[3]<1||s[4]<1||s[5]<1)
		break;
		int sum,i;
		for(sum=0,i=1;i<6;i++)
		{
			if(s[i]<s[0])
			sum+=s[i];
			else
			continue;
		}
		printf("%d\n",sum);
	}
}
