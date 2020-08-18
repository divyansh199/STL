#include<bits/stdc++.h>
using namespace std;

	bool compare(string a, string b)
		{
			if(a.length()==b.length())
		{
				
			return a>b;
		}
		return a.length()>b.length();
		}

int main()
	{
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);
		
		
		
	
		
		string s[100];
		int n;
		cin>>n; //number of strings//
		cin.get();
		
		for(int i=0;i<n;i++)
		{
			getline(cin,s[i]);
		}
		
		sort(s,s+n,compare);
		
		for(int i=0;i<n;i++)
{
	cout<<s[i]<<endl;
}
	}
