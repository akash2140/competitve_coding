#include<bits/stdc++.h>
using namespace std;

void dec_to_bin(int n)
{
	if(n==0)
		return;
	
	dec_to_bin(n/2);
	cout<<n%2<<" ";	
	
}

int main(void)
{
	int n;
	cin>>n;
	dec_to_bin(n);
	return 0;
}
