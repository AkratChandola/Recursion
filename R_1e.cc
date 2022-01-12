#include<bits/stdc++.h>
using namespace std;
int primeNum(int n)
{
	int i;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
void prime(int n,int i)
{
	static int count=0;
	if(count==n)
		return;
	if(primeNum(i)==1){
		count++;
		cout<<i<<" ";
	}

	return prime(n,i+1);
}

int main() 
{ 
    int n,i=2;
	cin>>n;
    prime(n,i);
    return 0; 
} 
