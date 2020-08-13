#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	double fact[n+1];
	fact[0]=fact[1]=0;
	
	for(int i=2;i<=n;i++)
		fact[i]=fact[i-1]+log(i);
	
	cout<<fact[n];
	
	return 0;
}
