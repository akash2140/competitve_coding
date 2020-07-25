  /* create a code for the series 5 6 15 9 45 12 .....*/
 #include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin>>n;
    
    int ini1=5,ini2=6; 
    cout<<ini1<<" "<<ini2<<" ";
    for(int i=0;i<n-2;i++)
    {
        if(i%2==0)
        {
            ini1=ini1*3;
            cout<<ini1<<" ";
        }
        else
        {
            ini2=ini2+3;
            cout<<ini2<<" ";
        }
    }
}
