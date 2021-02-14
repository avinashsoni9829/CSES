#include<bits/stdc++.h>
using namespace std;
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define ll int64_t

int main()
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  ll n;
  cin>>n;
  
	vector<ll>ans;
	ll x=n;
	ans.push_back(x);
	
 
	while(x!=1)
	{
		if(x&1)
		x=x*3+1;
		else
		x=x/2;
		ans.push_back(x);
	}
	
	for(auto z:ans)
	cout<<z<<" ";
	cout<<endl;
	
  
  
  
}