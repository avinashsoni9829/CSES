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
	
	if(n==1) cout<<"1"<<endl;
	else
	if(n==2) cout<<"NO SOLUTION"<<endl;
	else
	if(n==3) cout<<"NO SOLUTION"<<endl;
	else
	if(n==4) cout<<"2 4 1 3"<<endl;
	else
	{
		   vector<int>odd,even;
		   
		   for(int i=1;i<=n;++i)
		   {
		   	   if(i&1) odd.push_back(i);
		   	   else
		   	   even.push_back(i);
		   }
		   
		   sort(odd.begin(),odd.end(),greater<int>());
		   sort(even.begin(),even.end(),greater<int>());
		   
		   if(n&1)
		   {
		   	   for(auto z : odd)
		   	   cout<<z<<" ";
		   	   
		   	   for(auto z: even)
		   	   cout<<z<<" ";
		   	   cout<<endl;
		   }
		   else
		   {
		   	    for(auto z: even)
		   	   cout<<z<<" ";
		   	
		   	    for(auto z : odd)
		   	   cout<<z<<" ";
		   	   
		   	  
		   	   cout<<endl;
		   	   
		   }
	}
  
}
