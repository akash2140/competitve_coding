#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(void)
{
	int n;
	cin>>n;
	
	int a=ceil(log2(n));
	//cout<<a;
	
	int arr[a];
	int k=0;
	while(n!=0)
	{
		int rem=n%2;
		arr[k++]=rem;
		n=n/2;
	}
	
	for(int i=a-1;i>=0;i--)
		cout<<arr[i];
	
	return 0;
}
