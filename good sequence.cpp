// C++ program to print words in a sentence
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
 map<int,int>cnt;
  int t;
  cin>>t;
  while(t--)
    {
      int n;
      cin>>n;
      cnt[n]++;
       
    }
 for(auto u:cnt) cout<<u.first<<" "<<u.second<<" "<<endl;
cout<<endl;
  
  int ans =0 ;
  for(auto u:cnt)
    {
      if(u.first==u.second)
      {
        ans = 0;
        
      }
      else if(u.second>u.first)
      {
       ans += abs(u.second - u.first);
      }
     else
      {
        ans +=u.second;
      }
    }
  cout<<ans<<endl;
 
}
