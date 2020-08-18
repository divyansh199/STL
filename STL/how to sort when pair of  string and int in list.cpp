#include<bits/stdc++.h>
using namespace std;


bool compare(string A, string B)
	{
		if(A.compare(B)<0)
		{
			return A<B;
		}
		
	}
int main()
	{
		int n;
		cin>>n;
		string s[n];
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
