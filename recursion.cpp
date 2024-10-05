#include<iostream>
using namespace std;
int fn(int n,int a)
{
	if(n==1)
	return a;
	else
	return a*fn(n-1,a);
}
int main()
{
	int n,a,n1;
	cout<<"enter the value of n";
	cin>>n;
	cout<<"enter the value of a";
	cin>>a;
	if (n<0)
	n1=n*-1;
	else
	n1=n;
	int x=fn(n1,a);
	
	if(n<0)
	cout<<(1/(x*1.0));
	else
	cout<<x;
	return 0;
}
