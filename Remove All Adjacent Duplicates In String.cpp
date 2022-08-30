#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> st;
   
  	string temp ; 
    string s;
    cout<<"Enter the string : "<<endl;
    cin>>s;
    cout<<"Size : "<<s.size()<<endl;
    for(int i=0;i<s.size();i++)
    {
    	st.push(s[i]);
    	break;
    }
    
    for(int i = 1;i<s.size();i++)
    {
    
    	if(s[i] == st.top())
    	{
    		
    		st.pop();
    		
    		if(st.empty())
			{
				
				st.push(s[i+1]);
				i++;
			}
		}
		else
		{
			st.push(s[i]);
				
		}
		
	}
	while(!st.empty())
	{
		temp+=st.top();
		st.pop();
	}
	reverse(temp.begin(),temp.end());
	cout<<temp<<endl;


}
