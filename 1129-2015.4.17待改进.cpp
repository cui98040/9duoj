#include <stdio.h>
#include <math.h>
int main()
{
	long int n;
	while (scanf("%d",&n)!=EOF)
	{
		if (n==0)
		break;
		else
		{
			int s[40],i,d[40],sum=0;
			for(i=1;n>=1;n/=10,i++)
			{
				s[i]=n%10;
				//printf("s=%d\n",s[i]);
				d[i]=s[i]*(pow(2,i)-1);
				//printf("d=%d\n",d[i]);
				sum+=d[i];
				//printf("sum=%d\n",sum);
			}
			if (sum<=2147483647)
			printf("%d\n",sum);
		}
	}
}
