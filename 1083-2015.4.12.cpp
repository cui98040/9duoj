#include<stdio.h>
int main()
{
	int d1,d2;
	while(scanf("%d %d",&d1,&d2)!=EOF)
	{
		if(d1>1000000000||d2>1000000000)
		break;
		else
		{
			int i,s1[11];
			s1[1]=1;
			for(i=0;d1>=1;)
			{
				i=i+1;
				s1[i]=d1%10;
				d1=d1/10;
			}
			int j,s2[11];
			s2[1]=1;
			for(j=0;d2>=1;)
			{
				j=j+1;
				s2[j]=d2%10;
				d2=d2/10;
			}
			int n,m,temp=0,sum=0;
			for(n=1;n<=i;n++)
			{
				for(m=1;m<=j;m++)
				{
					temp=s1[n]*s2[m];
					sum=sum+temp;
				}
			}
			printf("%d\n",sum);
		}
	}
}
