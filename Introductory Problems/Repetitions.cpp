#include<bits/stdc++.h>
using namespace std;
#define debug(a) cout << #a << "=" << a << ' '<<endl;
#define ll int64_t

int main()
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
  
  string s;
  cin>>s;
  
  auto n=s.length();
  
  int overall_max=0;
  int curr_max=1;
  
  for(int i=1;i<n;++i)
  {
  	   if(s[i]==s[i-1])
  	   {
  	   	   curr_max+=1;
  	   }
  	   else
  	   {
  	   	  overall_max=max(curr_max,overall_max);
  	   	  curr_max=1;
  	   }
  }
  
  overall_max=max(curr_max,overall_max);
  
  cout<<overall_max<<endl;
  
  
  
    
}