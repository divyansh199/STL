#include<bits/stdc++.h>
using namespace std;

int main()
	{
		list<int>l;
		list<int>l1{1,2,3,10,8,5};
		list<string>l2{"apple","guaca","mango","banana"};
		l2.push_back("pineapple");
		
		//iterate over the list
		
		for(auto s:l2)
		{
			cout<<s<<" ";
		}
	}
