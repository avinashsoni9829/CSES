#include<bits/stdc++.h>
using namespace std;
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define ll int64_t

int main()
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	vector<int>a(n);
	
	for(auto &z:a)
	cin>>z;
	
	
	int xorr=1;
	
	for(int i=2;i<=n;++i)
	{
		   xorr^=i;
	}
	
	int xr=a[0];
	
	for(int i=1;i<n;++i)
	{
		  xr^=a[i];
	}
	
	cout<<(xorr^xr)<<endl;
	
	
	
	
  
}
