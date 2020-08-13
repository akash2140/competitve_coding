#include<bits/stdc++.h>
using namespace std;
//This only gives appromixate values to the factorial of a number.
int main(void)
{
	int n;
	cin>>n;
	long double sum=0;
	for(long long int counter=1;counter<=n;counter++)
		sum+=log(counter);
	
	cout<<to_string(round(exp(sum)));
	
	
}
