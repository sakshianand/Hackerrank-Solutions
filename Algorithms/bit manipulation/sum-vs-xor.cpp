#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n;
	cin>>n;
	long long ans=0;
	int c=0;
	while(n)
	{
		int b=n%2;
		if(b==0)
			c++;
		n/=2;
	}
	
	ans=pow(2,c);
	cout<<ans<<endl;
	return 0;
}
