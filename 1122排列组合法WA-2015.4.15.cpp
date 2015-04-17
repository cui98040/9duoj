//排列组合思想WA 
#include <stdio.h>
int main()
{
	int N,sum;
	while(scanf("%d",&N)==1)
	{
		sum=0;
		if (N>=20||N<=0)
		break;
		else if(N==1)
		printf("%d\n",N);
		else if(N==2)
		printf("%d\n",N);
		else
		{
			int i,j,i1,j1,count1,count2,count,s,jishu,j2,i2;
			for(i=1;i<N+1;i++)
			{
				for(j=1;j<N;j++)
				{ 
					if(i+2*j==N)
					{
						//printf("i=%d j=%d\n",i,j);
						if(j>=i)
						{
							j1=j+1,i1=i;
						}
						else
						{
							j1=i+1,i1=j;
						}
						jishu=i1;
						while(jishu>=1)
						{
							j2=j1,i2=jishu;
							s=j1-jishu;
							for(count1=1;j2>s;j2--)
							count1*=j2;
							//printf("count1=%d\n",count1);
							for(count2=1;i2>=1;i2--)
							count2*=i2;
							//printf("count2=%d\n",count2);
							count=count1/count2;
							//printf("count=%d\n",count);//插空法排列组合C j1 i1 
							sum+=count;
							//printf("sum=%d\n",sum);
							jishu=jishu-1;
							//printf("jishu=%d\n",jishu);
						}
					}
				}
			}
			if(N%2==0)
			sum=sum+2;
			else
			sum+=1;
			printf("%d\n",sum);
		}
	}
}
