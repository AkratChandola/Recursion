#include<bits/stdc++.h>
using namespace std;
void fibo(int n,int i)
{
	static int a=1,b=1,c;
	if(i>n)
		return;
	if(n==1)
	{
		cout<<"1";
		return;
	}
	if(n==2)
	{
		cout<<"1 1";
		return;
	}
	c=a+b;
	cout<<c<<" ";
	a=b;
	b=c;
	return fibo(n,i+1);
}

int main() 
{ 
    int n,i=1;
	cin>>n;
	fibo(n,i);
    return 0; 
} 
