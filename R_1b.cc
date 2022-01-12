#include<bits/stdc++.h>
using namespace std;
void natural(int n)
{
	if(n==1)
	{
		cout<<n;
		return;
	}
	cout<<n<<" ";
	return natural(n-1);
}

int main() 
{ 
    int n;
	cin>>n;
    natural(n);
    return 0; 
} 
