#include<bits/stdc++.h>
#define N 3
using namespace std;
void TOH(int n,char A,char B,char C) 
{ 
    if(n==0) 
        return; 
    TOH(n-1,A,C,B); 
    cout<<"Disk "<<n<<" from "<<A<<" to "<<B<<endl; 
    TOH(n-1,C,B,A); 
} 
int main() 
{ 
    TOH(N,'A','C','B');
    return 0; 
} 
