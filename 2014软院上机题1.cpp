#include <stdio.h>
int i,j,k,count1,count2,sumou,sumji;
int main()
{
	scanf("%d",&i);
	for(count1=0;count1<i;count1++) 
	{
		scanf("%d",&j);
		for(count2=0,sumou=0,sumji=0,k=0;count2<j;count2++)
		{
			scanf("%d",&k);
			if(k%2==0)
			sumou+=k;
			else
			sumji+=k;	
		}
		printf("%d %d",sumou,sumji);
	}
}

