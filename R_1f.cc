#include<bits/stdc++.h>
using namespace std;
void series(int n,int i)
{
	if(i==n-1)
		return;
	if(i==0)
		cout<<"1";
	cout<<" + 1/"<<pow(2,i);
	return series(n,i+1);
}

int main() 
{ 
    int n,i=0;
	cin>>n;
    series(n,i);
    return 0; 
} 
