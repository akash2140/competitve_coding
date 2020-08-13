#include<bits/stdc++.h>
using namespace std;

int coeff_value(int n,int k)
{
	if(n==0 || n<k)
		return 0;
	
	else if( n==1 || k==0 || n==k)
		return 1;
			
	else
		return coeff_value(n-1,k-1)+coeff_value(n-1,k);
	
}

int main(void)
{
	int n,k;
	cin>>n>>k;
	
	cout<<coeff_value(n,k);
	return 0;
}

