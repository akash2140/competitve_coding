#include<bits/stdc++.h>
using namespace std;

void left_rotate(int *a,int n,int d)
{
	int hcf=__gcd(n,d);
	
	for(int i=0;i<d;i++)
	{
		int temp=a[i];
		int j=i;
		
		while(1)
		{
			int k=j+hcf;
			if(k>=n)
				k=k-n;
				
			if(k==i)
				break;
				
			a[j]=a[k];
			j=k;
		}
		
		a[j]=temp;
	}
	
	
	
}

int main(void)
{
	int n;
	cin>>n;
	
	int a[n];
	
	for(int i=0;i<n;i++)
		cin>>a[i];
	
	int d;
	cin>>d;
	left_rotate(a,n,d);
		
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";	
	return 0;
}
