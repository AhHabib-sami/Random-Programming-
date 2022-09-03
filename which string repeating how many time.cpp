#include<bits/stdc++.h>
using namespace std;
int main()
{
  //String frequency
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    
    
    int t;
    cin>>t;
    while(t--)
    {
        map<string,int>freq;
        int n;
        cin>>n;
        
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            
            //jei string ta ke nicci sei string ta kei count kore feltesi
            
            freq[s]++;
        }
        int cnt =0;
        for(auto u:freq)
        {
            if(u.second==2)
            {
                cout<<u.first<<endl;
            }
        }
       
    }
}
