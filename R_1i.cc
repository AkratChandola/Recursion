#include<bits/stdc++.h>
using namespace std;
void series(int n,int i)
{
	if(i==n)
		return;
	if(i==1)
		cout<<"1";
	cout<<" + 1/"<<pow(3,i);
	return series(n,i+1);
}

int main() 
{ 
    int n,i=1;
	cin>>n;
    series(n,i);
    return 0; 
} 
