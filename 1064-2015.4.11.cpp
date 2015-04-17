#include<stdio.h>
int main()
{
	int a,b,c,d;
	for(a=1;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			{
				for(d=0;d<10;d++)
				{
					int N,N2;
					N=a*1000+b*100+c*10+d;
					N2=9*N;
					int a1,b1,c1,d1;
					a1=N2/1000%10;
					b1=N2/100%10;
					c1=N2/10%10;
					d1=N2%10;
					if (a==d1&&b==c1&&c==b1&&d==a1&&N2<10000)
					{
						printf("%d\n",N);
					}
				}
			}
		}
	}
}
