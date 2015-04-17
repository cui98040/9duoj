#include<stdio.h>
int main()
{int N,sum;
for(;scanf("%d",&N)!=EOF;){
	if(N>=0)
	sum=3*N*(N+1)/2;
	else
	sum=3*N*(-N+1)/2;
	printf("%d\n",sum);
}
}
