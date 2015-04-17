#include<cstdio>
using namespace std;
int main(){
	int a,b,k;
	int a1,b1,kk;
	int i;
	while(scanf("%d%d",&a,&b)!=EOF){
		if(a==0&&b==0)
		    break;
		scanf("%d",&k);
		for(i=0,kk=1;i<k;i++)
		    kk*=10;
		a1=a%kk;
		b1=b%kk;
		if(a1==b1)
	    	printf("-1\n");
	    else
	    	printf("%d\n",a+b);
	}
	return 0;
}
