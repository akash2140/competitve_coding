#include<bits/stdc++.h>
using namespace std;

int recwrap(int no_of_chocolate,int wrap)
{
	if(no_of_chocolate<wrap)
		return 0;
		
	else
		return (no_of_chocolate/wrap)+recwrap(no_of_chocolate/wrap+no_of_chocolate%wrap,wrap);
}

int cwp(int money,int price,int wrap)
{
	int no_of_chocolate=money/price;
	
	return no_of_chocolate+ recwrap(no_of_chocolate,wrap);
	
}


int main(void)
{
	int money,price,wrap;
	cin>>money>>price>>wrap;
	
	cout<<cwp(money,price,wrap);
	
	return 0;
}
