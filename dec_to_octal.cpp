#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	int bits=ceil(log2(n)/log2(8));
	int a[bits];
	
	int k=0;
	while(n!=0)
	{
		int rem=n%8;
		a[k++]=rem;
		n=n/8;
	}
	
	for(int i=bits-1;i>=0;i--)
		cout<<a[i]<<" ";
	
	return 0;
}
