#include<bits/stdc++.h>
#include<math.h>
using namespace std;

double sum(int n)
{
	if(n==1)
		return 0;
	
	return (sum(n-1)+ log(n));
}


int  main(void)
{
	
	int n;
	cin>>n;
	printf("%.2f",sum(n));
	return 0;
}
