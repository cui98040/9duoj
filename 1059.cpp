#include<stdio.h>
int main()
{
	int a,b,c;
	for(a=0;a<10;a++)
	{
		for(b=0;b<10;b++)
		{
			for(c=0;c<10;c++)
			if (a*100+b*110+c*12==532)
			printf("%d %d %d",a,b,c);
		}
	}
}
