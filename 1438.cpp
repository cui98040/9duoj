#include<stdio.h>
int main(){
	int a,b,min;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a<=b)
		min=a;
		else
		min=b;
		for(;min%a!=0||min%b!=0;min++);
		printf("%d\n",min);
	}
}
/************
¾Å¶ÈOJ 1438
torres
2015.4.3
************/ 
