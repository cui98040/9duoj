#include<stdio.h>
int main()
{
	int a,b,c,d,a1,b1,c1,d1,sum,count;
	for(a=1;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				for(d=0;d<10;d++)
				{
					count=a*1000+b*100+c*10+d;
					sum=count*9;
					a1=sum/1000%10;
					b1=sum/100%10;
					c1=sum/10%10;
					d1=sum%10;
					if(a==d1&&b==c1&&c==b1&&d==a1&&sum<=9999)
					printf("%d",count);
									
				}	
			}
		}
	}
}
