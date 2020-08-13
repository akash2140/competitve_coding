#include<bits/stdc++.h>
using namespace std;

int main(void)
{
	int n,k;
	cin>>n>>k;


	int comb[n+1][k+1];
	comb[0][0]=0;
	
	for(int i=1;i<=k;i++)
		comb[0][i]=0;
	
	for(int i=0;i<=n;i++)
		comb[i][0]=1;
		
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=k;j++)
		{
			comb[i][j]=comb[i-1][j-1]+comb[i-1][j];
		}
	}
	
	cout<<comb[n][k];
	return 0;	
}




