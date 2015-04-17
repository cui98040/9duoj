#include<stdio.h>
int main(){
	int a;
	while(scanf("%d",&a)!=EOF){
		if (a==0)
		break;
		int step=0;
		for(;a!=1;step++){
			if (a%2==0)
			a/=2;
			else
			a=(3*a+1)/2;
		}
		printf("%d\n",step);
	}
	return 0;
}
/**********************
¾Å¶ÈOJ 1031
torres
2015.4.4
***********************/ 
