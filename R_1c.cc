#include<bits/stdc++.h>
using namespace std;
void even(int n,int i)
{
	if(i>n)
		return;
	cout<<i<<" ";
	return even(n,i+2);
}

int main() 
{ 
    int n,i=2;
	cin>>n;
    even(n,i);
    return 0; 
} 
