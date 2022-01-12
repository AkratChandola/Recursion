#include<bits/stdc++.h>
using namespace std;
int fibo(int n)
{
	if(n==1)
		return 1;
	if(n==2)
		return 2;
	return fibo(n-1)+fibo(n-2)+1;	
}

int main() 
{ 
    int n,i=1;
	cin>>n;
	cout<<fibo(n);
    return 0; 
} 
