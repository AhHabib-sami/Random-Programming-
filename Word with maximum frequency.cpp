// C++ program to print words in a sentence
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
int t;
  cin>>t;
  while(t--)
  {
      
    
  vector<string>v;
  string s;
  char c ;
  cin>>c;
  getline(cin,s);
  s = c+s;
  string word ;
  for(auto u:s)
  {
    if(isspace(u))
    {
      //cout<<"mama paisi "<<word<<endl;
      v.push_back(word);
      word.clear();
    }
    else {
      word = word + u;
      //cout<<"Word e entry disi mama : "<<word<<endl;
    }
  }
  v.push_back(word);
 // cout<<"ami vector theke bolchi : "<<endl;
 
  map<string,int>cnt;
  int maxFreq = 0;
  //cout<<"let's go for map "<<endl;
  for(auto u:v)
    {
      cnt[u]++;
      //cout<<"count : "<<cnt[u]<<endl;
      maxFreq = max(maxFreq,cnt[u]);
    }
  //for(auto u:cnt) cout<<u.first<<" "<<u.second<<endl;
  
  
  //cout<<"Maximum Frequency : "<<maxFreq<<endl;

  for(auto u:v)
    {
      if(cnt[u] == maxFreq)
      {
        cout<<u<<" "<<maxFreq<<endl;
        break;
      }
    }

  }
}
