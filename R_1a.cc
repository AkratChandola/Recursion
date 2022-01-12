#include<bits/stdc++.h>
using namespace std;
void natural(int n,int i)
{
	if(i>n)
		return;
	cout<<i<<" ";
	return natural(n,i+1);
}

int main() 
{ 
    int n,i=1;
	cin>>n;
    natural(n,i);
    return 0; 
} 
