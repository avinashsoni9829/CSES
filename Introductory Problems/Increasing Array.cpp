
// Problem: Increasing Array
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1094
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

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
	for(auto &z:a) cin>>z;
	
	ll moves=0;
	
	for(int i=1;i<n;++i)
	{
		  if(a[i]>=a[i-1]) continue;
		  else
		  {
		  	moves+=(abs(a[i-1]-a[i]));
		  	   a[i]+=abs(a[i-1]-a[i]);
		  	   
		  }
	}
	

	
	
	

	
	
	
	
	cout<<moves<<endl;
	
  
}
