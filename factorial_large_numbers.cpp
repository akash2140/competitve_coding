#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	int a[500];
	int size=1;
	a[0]=1;
	
	for(int x=2;x<=n;x++)
	{
		int carry=0;
		for(int i=0;i<size;i++)
		{
			int prod=a[i]*x+carry;
			a[i]=prod%10;
			carry=prod/10;
		}
		while(carry)
		{
			a[size]=carry%10;
			carry=carry/10;
			size++;
		}
	}
	
	for(int i=size-1;i>=0;i--)
		cout<<a[i];
	
	return 0;
}
