#include <stdio.h>
int main()
{	int a,b,min,out;
	while(scanf("%d %d",&a,&b)!=EOF)
{		if(a<b)
		min=a;
		else 
		min=b;
		for(;((a%min)!=0)||((b%min)!=0);min--);
		printf("%d\n",min);
}
}
