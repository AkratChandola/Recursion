#include<bits/stdc++.h>
using namespace std;
void series(int n,int i)
{
	if(i==n)
	{
		cout<<i<<"^"<<i;
		return ;
	}
	cout<<i<<"^"<<i<<" + ";
	return series(n,i+1);
}

int main() 
{ 
    int n,i=1;
	cin>>n;
    series(n,i);
    return 0; 
} 
