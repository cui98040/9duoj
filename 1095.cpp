#include<iostream>
#include<math.h>
#include<stack>
using namespace std;
void print(int n)
{	int i,num;
	num=0;
	while(pow(2,num)<=n)
	{
		num++;
	}
	num--;
	if(num==0)
	{
		cout<<"2(0)";
	}
	else if(num==1)
	cout<<"2";
	else
	{
		cout<<"2(";
		print(num);
		cout<<")";
	}
	n=n-pow(2,num);
	if(n!=0)
	{
		cout<<"+";
		print(n);
	}
}

int main()
{
	int n;
	while(cin>>n)
	{
		print(n);
		cout<<endl;
	}
	return 0;
}
