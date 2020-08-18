//functor
//functional objects

#include<bits/stdc++.h>
using namespace std;

class fun{
	
	public:
		void operator()(string s)
			{
				cout<<"having fun with"<<s;
			}
};

int main()
{
	fun f;
	f("c++");
	
	return 0;
	
}
