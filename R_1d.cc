#include<bits/stdc++.h>
using namespace std;
void odd(int n,int i)
{
	if(i>2*n)
		return;
	cout<<i<<" ";
	return odd(n,i+2);
}

int main() 
{ 
    int n,i=1;
	cin>>n;
    odd(n,i);
    return 0; 
} 
