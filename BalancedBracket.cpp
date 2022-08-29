

#include<bits/stdc++.h>
using namespace std;
bool inBalanced(char c1,char c2)
{
	return((c1=='(' && c2==')')||(c1=='{' && c2=='}')||(c1=='[' && c2==']'));

}
int main()
{
	int n;
	cout<<"Size of the string : ";
	cin>>n;
	
	while(n--)
	{
	    bool check = false;
		string s;
		cin>>s;
		double size = s.size();
		
		double c = 0;
		stack <char> st;
		for(int i =0;i<s.size();i++)
		{
			if(s[i]=='(' || s[i]=='[' || s[i]=='{')
			{
				st.push(s[i]);
			
			}
			else
			{
				if(st.empty())
				{
					c=0;
				}
				else
				{
			
				    
					if(inBalanced(st.top(),s[i]))
					{
						c++;
					    
						st.pop();
					
					
					}	
					else
					{
					    check = true;
					    c=0;
					    
					}
				}
			
		    }
	
	    }
	   
	    if(c == size/2)
	    {
	    	cout<<"Balanced"<<endl;
	    
		}
		else if(c!=size/2)
		{
			cout<<"Not Balanced"<<endl;
			
		}
		
	
}

}

